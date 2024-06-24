#include <stdio.h>
#include <string.h>

//Faça um programa usando ponteiros que percorra todo um vetor (10 posições) 
//e crie um novo vetor com os valores das posições 1, 3, 5.....


int main() {
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int novoVetor[5];
    int *ptr = vetor;
    ptr++;

    for (int i = 0; i < 10; i++)
    {
        novoVetor[i] = *ptr;
        ptr = ptr+2;
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("|%d| ", novoVetor[i]);
    }
    


}