#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct {
    int** data;
    int size;
} Matriz;

Matriz* fill_matriz_from_file();
void print_matriz(Matriz* matriz);
Matriz* create_warshall_matriz(Matriz* original);

#endif // MATRIZ_H