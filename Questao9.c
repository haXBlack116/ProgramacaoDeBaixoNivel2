//Faça um programa usando que ponteiros que informe 
//o endereço onde cada valor de um array de 5 posições está armazenado.

#include <stdio.h>
#include <string.h>

int main() {
    int vetor[5] = {10,20,30,40,50};
    int *ptr = vetor;
    ptr = vetor;
    for (int i = 0; i < 5; i++)
    {
        printf("| %p |", vetor[i]);
    }
    
}