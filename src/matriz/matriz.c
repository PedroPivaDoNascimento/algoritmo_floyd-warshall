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

void create_warshall_matriz(Matriz* warshall) {
    for (int k = 0; k < warshall->size; k++) {   
        for (int i = 0; i < warshall->size; i++) {
            for (int j = 0; j < warshall->size; j++) {
                warshall->data[i][j] = ((warshall->data[i][j]) || (warshall->data[i][k] && warshall->data[k][j])); 
            }
        }
    }
}

void create_floyd_warshall_matriz(Matriz* floyd_warshall) {
    for (int k = 0; k < floyd_warshall->size; k++) {   
        for (int i = 0; i < floyd_warshall->size; i++) {
            for (int j = 0; j < floyd_warshall->size; j++) {
                if (floyd_warshall->data[i][k] + floyd_warshall->data[k][j] < floyd_warshall->data[i][j]){
                    floyd_warshall->data[i][j] = floyd_warshall->data[i][k] + floyd_warshall->data[k][j];
                }
            }
        }
    }
}
