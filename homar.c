#include "homar.h"
#include <stdio.h>

void sortHomari(Homar* homari, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double r1 = (double) homari[i].valoare / homari[i].dimensiune;
            double r2 = (double) homari[j].valoare / homari[j].dimensiune;
            if (r1 < r2) {
                Homar temp = homari[i];
                homari[i] = homari[j];
                homari[j] = temp;
            }
        }
    }
}

int maximizeazaCaptura(Homar* homari, int n, int capacitate) {
    sortHomari(homari, n);

    int valoareTotala = 0;
    int dimensiuneTotala = 0;

    for (int i = 0; i < n; i++) {
        if (dimensiuneTotala + homari[i].dimensiune <= capacitate) {
            dimensiuneTotala += homari[i].dimensiune;
            valoareTotala += homari[i].valoare;
        }
    }

    return valoareTotala;
}
