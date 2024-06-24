#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "Bernardo"; 
    int tamanho = strlen(nome);
    char *ptr = nome + tamanho - 1; 

    printf("Nome de tras para frente: ");
    while (ptr >= nome) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}
