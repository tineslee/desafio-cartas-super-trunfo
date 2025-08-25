#include <stdio.h>

struct Carta {
    char nome[20];
    int ataque;
    int defesa;
};

int main() {
    struct Carta cartas[2] = {
        {"Cavaleiro", 80, 70},
        {"Mago", 60, 90}
    };

    int escolha;
    printf("Escolha sua carta (0 - Cavaleiro, 1 - Mago): ");
    scanf("%d", &escolha);

    printf("Você escolheu: %s\n", cartas[escolha].nome);
    return 0;
}
