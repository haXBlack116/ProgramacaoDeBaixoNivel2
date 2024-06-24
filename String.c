#include <stdio.h>
#include <string.h>

int main() {
    char string[100]; 
    printf("Digite um valor que seja string: ");
    fgets(string, sizeof(string), stdin); 

    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    int tamanho = strlen(string);
    char *ptr = string + tamanho - 1; 

    printf("String de trás para frente: ");
    while (ptr >= string) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");

    return 0;
}