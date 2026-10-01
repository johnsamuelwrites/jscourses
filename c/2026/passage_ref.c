#include <stdio.h>

void echange_passage_valeur(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void echange_passage_ref(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void echange_adresse(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10, b = 20;
    printf("Avant echange_passage_valeur: a=%d, b = %d\n", a, b);
    echange_passage_valeur(a, b); 
    printf("Après echange_passage_valeur: a=%d, b = %d\n", a, b);

    printf("Avant echange_passage_ref: a=%d, b = %d\n", a, b);
    echange_passage_ref(&a, &b); 
    printf("Après echange_passage_ref: a=%d, b = %d\n", a, b);

    printf("Avant echange_adresse: a=%d, b = %d\n", a, b);
    echange_adresse(&a, &b); 
    printf("Après echange_adresse: a=%d, b = %d\n", a, b);
    return 0;
}