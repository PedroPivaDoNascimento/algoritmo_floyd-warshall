#include "controller.h"
#include "matriz_reader/matriz_reader.h"
#include "matriz_handler/matriz_handler.h"
#include "view/view.h"
#include <stdio.h>
#include <stdlib.h>

void run() {
    int size;
    int** matriz = read_matriz_from_file("matriz.txt", &size);
    if (!matriz) {
        fprintf(stderr, "Deu pra ler não.\n");
        return;
    }

    floyd_warshall(matriz, size);
    display_matriz(matriz, size);

    // Free allocated memory
    for (int i = 0; i < size; i++) {
        free(matriz[i]);
    }
    free(matriz);
}