#include "view.h"
#include "./matriz/matriz.h"
#include <stdio.h>
#include <stdlib.h>

void print_matriz_entrada(Matriz* matriz_entrada) {
    printf("Matriz de dados de Entrada:\n");
    for (int i = 0; i < matriz_entrada->size; i++) {
        for (int j = 0; j < matriz_entrada->size; j++) {
            printf("[%d]\t", matriz_entrada->data[i][j]);
        }
        printf("\n");
    }
}

void print_matriz_warshall(Matriz* matriz) {
    printf("Matriz de Warshall:\n");
    for (int i = 0; i < matriz->size; i++) {
        for (int j = 0; j < matriz->size; j++) {
            printf("[%d]\t", matriz->data[i][j]);
        }
        printf("\n");
    }
}

void print_matriz_floyd_warshall(Matriz* matriz) {
    printf("Matriz de Floyd-Warshall:\n");
    for (int i = 0; i < matriz->size; i++) {
        for (int j = 0; j < matriz->size; j++) {
            printf("[%d]\t", matriz->data[i][j]);
        }
        printf("\n");
    }
}

int choice_menu() {
    int choice;
    printf("Escolha a opção da Matriz que você deseja gerar:\n");
    printf("1. Warshall\n");
    printf("2. Floyd-Warshall\n");
    printf("Opção: ");
    scanf("%d", &choice);
    return choice;
}
