#include "matriz_reader.h"
#include <stdio.h>
#include <stdlib.h>

int** read_matriz_from_file(const char* filename, int* size) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return NULL;
    }

    fscanf(file, "%d", size);
    int** matriz = (int**)malloc(*size * sizeof(int*));
    for (int i = 0; i < *size; i++) {
        matriz[i] = (int*)malloc(*size * sizeof(int));
        for (int j = 0; j < *size; j++) {
            fscanf(file, "%d", &matriz[i][j]);
        }
    }

    fclose(file);
    return matriz;
}