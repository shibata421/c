#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

int main() {
    char *buffer;
    buffer = malloc(sizeof(char) * SIZE);

    if(buffer == NULL) {
        puts("Erro na alocação de memória");
        return 1;
    }
    printf("Digite seu nome: ");
    fgets(buffer, SIZE, stdin);
    printf("Hello, %s", buffer);
    return 0;
}
