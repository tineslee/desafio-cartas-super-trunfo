#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Carta {
    char nome[20];
    int ataque;
    int defesa;
};

int main() {
    srand(time(NULL));
    struct Carta cartas[3] = {
        {"Cavaleiro", 80, 70},
        {"Mago", 60, 90},
        {"Arqueiro", 75, 65}
    };

    int pontosJogador = 0, pontosPC = 0;

    for (int rodada = 1; rodada <= 3; rodada++) {
        int escolha;
        printf("\nRodada %d - Escolha sua carta (0-Cavaleiro, 1-Mago, 2-Arqueiro): ", rodada);
        scanf("%d", &escolha);

        int escolhaPC = rand() % 3;
        printf("Você: %s (Ataque %d)\n", cartas[escolha].nome, cartas[escolha].ataque);
        printf("PC: %s (Ataque %d)\n", cartas[escolhaPC].nome, cartas[escolhaPC].ataque);

        if (cartas[escolha].ataque > cartas[escolhaPC].ataque) pontosJogador++;
        else if (cartas[escolhaPC].ataque > cartas[escolha].ataque) pontosPC++;
    }

    printf("\nPlacar final: Jogador %d x %d PC\n", pontosJogador, pontosPC);
    if (pontosJogador > pontosPC) printf("Você venceu!\n");
    else if (pontosPC > pontosJogador) printf("PC venceu!\n");
    else printf("Empate!\n");

    return 0;
}
