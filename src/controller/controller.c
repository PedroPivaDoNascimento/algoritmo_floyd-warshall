#include "controller.h"
#include "matriz_reader/matriz_reader.h"
#include "view/view.h"
#include <stdio.h>
#include <stdlib.h>

Matriz* read_matriz_entrada() {
    Matriz* matriz = create_matriz(0);
    matriz = fill_matriz_from_file();
    print_matriz_entrada(matriz);
    return matriz;
}


void make_warshall_matriz(Matriz* matriz_entrada) {
    Matriz* warshall = matriz_entrada;
    create_warshall_matriz(warshall);
    print_matriz_warshall(warshall);
}


void make_floyd_warshall_matriz(Matriz* matriz_entrada) {
    Matriz* floyd_warshall = matriz_entrada;
    create_floyd_warshall_matriz(floyd_warshall);
    print_matriz_floyd_warshall(floyd_warshall);
}


void run(int choice) {
    Matriz* matriz_entrada = read_matriz_entrada();
    

    switch (choice) {
        case 1:
            make_warshall_matriz(matriz_entrada);
            break;
        case 2:
            make_floyd_warshall_matriz(matriz_entrada);
            break; 
        default:
            printf("Opção inválida\n");
            break;
    }
   
}