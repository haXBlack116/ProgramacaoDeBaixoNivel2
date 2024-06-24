#include <stdio.h>
#include <string.h>

int main(){
    int valores[10] = {11,22,77,65,23,63,81,8,2,10};
    int tamanho;
    int *ptr = valores;
    ptr++;

    tamanho = sizeof(valores)/sizeof(int);
    int valoresSaida[tamanho/2];
    for (int i = 0; i < tamanho; i++)
    {
        valoresSaida[i] = *ptr;
        ptr = ptr+2;
    }
    tamanho = sizeof(valoresSaida)/sizeof(int);
    for (int i = 0; i < tamanho; i++)
    {
        printf("| %d |", valoresSaida[i]);
    }
    
    
}