#include <stdio.h>
#include <string.h>

int main() {
    char first[50], second[50], buffer[100];

    printf("Digite a primeira string: ");
    fgets(first, 50, stdin);

    printf("Digite a segunda string: ");
    fgets(second, 50, stdin);

    strcpy(buffer, first);
    strcat(buffer, second);

    puts(buffer);

    return 0;
}
