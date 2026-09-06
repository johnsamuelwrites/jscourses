/* Compiler uniquement (-c) : ce fichier ne contient pas de main.
   C17 : () ne precise pas les parametres ; l'appel est accepte.
   C23 : () signifie aucun parametre ; l'appel est refuse.
   Ne pas executer cet exemple : aucune definition de fonction n'est fournie. */
int fonction();

int demonstration(void)
{
    return fonction(42);
}
