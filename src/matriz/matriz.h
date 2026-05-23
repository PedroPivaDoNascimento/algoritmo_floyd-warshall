#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct {
    int** data;
    int size;
} Matriz;

Matriz* create_matriz(int size);
Matriz* fill_matriz_from_file();
void create_warshall_matriz(Matriz* original);
void create_floyd_warshall_matriz(Matriz* original);

#endif // MATRIZ_H