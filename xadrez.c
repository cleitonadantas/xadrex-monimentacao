#include <stdio.h>

int main() {
    // Movimentação da Torre (usando "for")
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (usando "while")
    printf("\nMovimento do Bispo:\n");
    int contador = 1;
    while (contador <= 5) {
        printf("Cima, Direita\n");
        contador++;
    }

    // Movimentação da Rainha (usando "do-while")
    printf("\nMovimento da Rainha:\n");
    int passos = 1;
    do {
        printf("Esquerda\n");
        passos++;
    } while (passos <= 8);

    return 0;
}
