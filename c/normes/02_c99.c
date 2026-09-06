#include <stdbool.h>
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(void)
{
    // C99 : commentaire sur une ligne et initialisation des champs par nom.
    struct Point point = {.y = 3, .x = 2};
    printf("Point : (%d, %d)\n", point.x, point.y);

    // C99 : declaration apres une instruction ; bool vient de stdbool.h.
    bool positif = point.x > 0 && point.y > 0;
    printf("Coordonnees positives : %s\n", positif ? "oui" : "non");
    return 0;
}
