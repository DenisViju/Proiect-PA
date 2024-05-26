#ifndef HOMAR_H
#define HOMAR_H

typedef struct {
    int dimensiune;
    int valoare;
} Homar;

void sortHomari(Homar* homari, int n);
int maximizeazaCaptura(Homar* homari, int n, int capacitate);

#endif
