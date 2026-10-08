#include <stdio.h>

float somme (float num1, float num2) {
    return num1+num2;
}

float difference (float valeur1, float valeur2) {
    return valeur1 - valeur2;
}

int main() {
    float (*operation)(float, float);

    char op='-';
    switch(op) {
        case '-': operation = difference;
              break;
        case '+': operation = somme;
            break;
    }

    printf("Résultat : %f \n", operation(3.14, 45.56));
    return 0;
}