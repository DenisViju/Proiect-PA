#include <stdio.h>
#include "homar.h"

int main() {
    Homar homari[] = {
        {4, 20},
        {3, 15},
        {2, 10},
        {5, 25}
    };

    int n = sizeof(homari) / sizeof(homari[0]);
    int capacitate = 10;

    int valoareMaxima = maximizeazaCaptura(homari, n, capacitate);
    printf("Valoarea maxima a capturii: %d monede de aur\n", valoareMaxima);

    return 0;
}
