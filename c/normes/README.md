# C 2026 — Évolution des normes (diapositive 6)

Exemples pour [le cours 1, diapositive 6](https://johnsamuel.info/fr/enseignement/cours/2026/C/cours1.html#slide6).
Chaque programme isole quelques nouveautés ; lire les fichiers dans l'ordre.

| Fichier | Notion | Résultat attendu |
| --- | --- | --- |
| `01_c89.c` | Prototype, déclarations en début de bloc, commentaires `/* */` | Somme : 5 |
| `02_c99.c` | `//`, `bool` via `<stdbool.h>`, déclaration après une instruction, initialisation désignée | Point : (2, 3), coordonnées positives |
| `03_c11.c` | Assertion à la compilation, alignement | Alignement et taille dépendant de la plateforme |
| `04_c11_threads.c` | Deux threads et compteur atomique partagé | 20000 si ces fonctionnalités sont disponibles |
| `05_c23.c` | `bool`, `true`, `false`, `static_assert`, `alignof`, `thread_local`, `nullptr`, `constexpr` | oui/non, pointeur nul, limite 10, compteur 1 |
| `06_version.c` | Identifier la norme sélectionnée | Valeur de `__STDC_VERSION__` |
| `07_prototype.c` | Changement du sens de `fonction()` | Compilation acceptée en C17, refusée en C23 |

## Compiler et exécuter

Depuis ce répertoire, avec GCC 15 (ou une version compatible avec les fonctionnalités utilisées) et GNU Make :

```sh
make run
make versions
make clean
```

Les exécutables sont placés dans `build/`. Pour un seul exemple :

```sh
gcc -std=c99 -Wall -Wextra -pedantic-errors 02_c99.c -o /tmp/exemple-c99
/tmp/exemple-c99
```

La cible `threads` emploie `-pthread` pour GCC sur les systèmes qui le prennent en charge. Les threads et les types atomiques sont optionnels en C11/C17 : le programme affiche un message si l'implémentation signale leur absence.

## Manipulations en classe

1. Compiler `01_c89.c` avec `-std=c90`, puis `-std=c23` : le même programme reste valide. C89 et C90 correspondent ici au même langage.
2. Compiler `02_c99.c` avec `-std=c90 -pedantic-errors` : observer les diagnostics, puis recommencer avec `-std=c99`. Retirer ou déplacer les nouveautés une à une pour comprendre les différences.
3. Dans une copie de `03_c11.c`, remplacer la condition de `_Static_assert` par `0` : la compilation échoue avant toute exécution. En C11, `static_assert` existe aussi comme macro de `<assert.h>` ; en C23, c'est un mot-clé.
4. Comparer `build/c11` et `build/c17` : ils proviennent du **même fichier**. C17/C18 apporte des corrections et clarifications à C11, sans nouvelle fonctionnalité à illustrer par un programme distinct.
5. Exécuter le compteur plusieurs fois : les opérations atomiques évitent de perdre des incréments concurrents. Une simple variable `int` partagée sans synchronisation créerait une course de données et un comportement indéfini.
6. Compiler `05_c23.c` avec `-std=c17` : les nouveaux mots-clés ne sont pas tous reconnus. L'exemple utilise un seul thread ; `thread_local` y montre la déclaration d'un compteur propre à chaque thread.
7. Comparer les déclarations sans prototype, sans lier ni exécuter ce fichier :

```sh
gcc -std=c17 -Wall -Wextra -pedantic-errors -c 07_prototype.c -o /tmp/prototype-c17.o
gcc -std=c23 -Wall -Wextra -pedantic-errors -c 07_prototype.c -o /tmp/prototype-c23.o
```

La seconde commande doit échouer : `fonction()` signifie désormais « aucun paramètre ». Avant C23, elle ne précise pas les paramètres. `fonction(void)` exprime « aucun paramètre » dans toutes ces normes. Ajouter `-Wstrict-prototypes` en C17 permet de signaler l'ancienne déclaration.

`make versions` affiche normalement : macro absente en C90, `199901` en C99, `201112` en C11, `201710` en C17 et `202311` en C23. La macro décrit le mode de langage, pas une garantie de prise en charge complète de toute la bibliothèque.

Préciser `-std=...` rend le choix visible et reproductible. `-pedantic-errors` fait rejeter les extensions nécessitant un diagnostic ; cela ne prouve pas à lui seul la portabilité de tout un programme. Le mode `gnu23` autorise aussi des extensions GNU.
