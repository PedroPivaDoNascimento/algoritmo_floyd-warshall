#include "matriz.h"
#include <stdlib.h>
#include "matriz_reader.h"


Matriz* create_matriz(int size) {
    Matriz* matriz = (Matriz*)malloc(sizeof(Matriz));
    matriz->size = size;
    matriz->data = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i < size; i++) {
        matriz->data[i] = (int*)malloc(size * sizeof(int));
    }
    return matriz;
}

Matriz* fill_matriz_from_file() {
    int size;
    int** matriz_data = read_matriz_from_file("matriz.txt", &size);

    if (!matriz_data) {
        return NULL;
    }
    
    Matriz* matriz = (Matriz*)malloc(sizeof(Matriz));
    matriz->data = matriz_data;
    matriz->size = size;

    return matriz;
}

void print_matriz(Matriz* matriz) {
    pritf("Matriz de dados de Entrada:\n");
    for (int i = 0; i < matriz->size; i++) {
        for (int j = 0; j < matriz->size; j++) {
            printf("[%d]\t", matriz->data[i][j]);
        }
        printf("\n");
    }
}

Matriz* create_warshall_matriz(Matriz* original) {
    Matriz* warshall = create_matriz(original->size);
    for (int i = 0; i < original->size; i++) {   
        for (int j = 0; j < original->size; j++) {
            for (int k = 0; k < original->size; k++) {
                
            }
        }
    }
}
