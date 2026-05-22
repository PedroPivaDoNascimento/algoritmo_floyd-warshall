#include <stdio.h>
#include <stdlib.h>


int main() {
    char linha[4];
    int num1, num2;

    printf("Digite dois numeros separados por espaco: ");
    
    // 1. Lê a linha inteira incluindo os espaços
    fgets(linha, sizeof(linha), stdin);

    // 2. Extrai os números de dentro da string armazenada
    int lidos = sscanf(linha, "%d %d", &num1, &num2);

    printf("Numeros lidos: %d e %d\n", num1, num2);
    return 0;
}