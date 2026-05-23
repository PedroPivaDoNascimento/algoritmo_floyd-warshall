#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "./matriz/matriz.h"

Matriz* read_matriz_entrada();
Matriz* matriz_create_warshall_matriz(Matriz* matriz_entrada);
Matriz* matriz_create_floyd_warshall_matriz(Matriz* matriz_entrada);
void run(int choice);

#endif // CONTROLLER_H