#include <stdio.h>

struct Carta {
    char nome[20];
    int ataque;
    int defesa;
};

int main() {
    struct Carta c = {"Cavaleiro", 80, 70};
    printf("Carta: %s\nAtaque: %d\nDefesa: %d\n", c.nome, c.ataque, c.defesa);
    return 0;
}
