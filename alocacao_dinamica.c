#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
    //Q1
    //malloc: aloca o numero especificado de bytes
    //realloc: aumenta ou diminui o tamanho do bloco de memoria especificado, movendo-o se necessario
    //calloc: aloca o numero especificado de bytes e os inicializa para zero
    //free: libera o bloco especificado de memoria de volta para o sistema
    int linhas,colunas;
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d\t", &matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < linhas; i++){
        free(matriz[i]);
    }

    //Q2
    //Q2) Explique o que o trecho abaixo escrito em C faz:
    int *vetor; //cria um ponteiro para inteiro chamado vetor.
    int n; //cria um inteiro n.
    scanf ("%d", &n); //le uma entrada e atribui a n.
    vetor = malloc (n * sizeof (int)); //aloca dinamicamente memoria para armazenar n inteiros e armazena o endereço no ponteiro vetor.
    for (int i = 0; i < n; ++i){ //laço para percorrer o vetor.
        scanf ("%d", &vetor[i]); //le uma entrada e armazena na posição i do vetor.
    }
    free (vetor); //libera memoria alocada para vetor.

    int soma(int a, int b){
        return (a + b);
    }
    int main(){
        int i,res,a=1;
        for (i = 0; i < 100; i++)
        {
            res = soma(a,res);
        }
        for (res = 0, i = 0; i < 100; i++)
        {
            res = SOMA(a,res);
        }
    }
}