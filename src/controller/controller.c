#include "controller.h"
#include "matriz_reader/matriz_reader.h"
#include "matriz_handler/matriz_handler.h"
#include "view/view.h"
#include "matriz.h"
#include <stdio.h>
#include <stdlib.h>

void run() {
    Matriz* matriz = create_matriz(0);
    if (matriz == NULL) {
        fprintf(stderr, "Não foi possível criar a matriz\n");
        return;
    }
    print_matriz(matriz);


    
}