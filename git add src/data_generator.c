#include "data_generator.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genereazaDate(int n) {
    FILE* file = fopen("data/input.txt", "w");
    if (file == NULL) {
        printf("Eroare la deschiderea fișierului!\n");
        return;
    }

    fprintf(file, "%d\n", n);
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        int dimensiune = rand() % 100 + 1;
        int valoare = rand() % 100 + 1;
        fprintf(file, "%d %d\n", dimensiune, valoare);
    }

    fclose(file);
}

int main() {
    int n = 1000; // Număr de homari pentru datele experimentale
    genereazaDate(n);
    printf("Datele au fost generate în fișierul data/input.txt\n");

    return 0;
}
