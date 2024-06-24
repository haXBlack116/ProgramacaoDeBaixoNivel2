//Faça um programa que leia um array e separe em dois arrays, 
//um contendo os números pares e outro contendo os números ímpares.
#include <stdio.h>
#include <string.h>

int main() {
    int vetor[10] = {23,24,90,51,65,74,77,0,2,9};
    int vetorPares[10];
    int vetorImpares[10];
    int indicePares = 0;
    int indiceImpares = 0;

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetorPares[indicePares] = vetor[i];
            indicePares++;
        }else
        {
            vetorImpares[indiceImpares] = vetor[i];
            indiceImpares++;
        }
    }
    printf("Vetor de Pares: ");
    for (int i = 0; i < indicePares-1; i++)
    {
        printf("|%d|", vetorPares[i]);
    }
    printf("\n");
    printf("Vetor de Impares: ");
    for (int i = 0; i < indiceImpares-1; i++)
    {
        printf("|%d|", vetorImpares[i]);
    }

}