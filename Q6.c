#include <stdio.h>
#include <string.h>

void separaVetor(int valores[], int tamanho){
    int vetorPares[tamanho];
    int vetorImpares[tamanho];
    int indicePares = 0;
    int indiceImpares = 0;
    for (int i = 0; i < tamanho; i++){
        if (valores[i] % 2 == 0){
            vetorPares[indicePares] = valores[i];
            indicePares++;
        }else{
            vetorImpares[indiceImpares] = valores[i];
            indiceImpares++;
        }
    }
    printf("Array de Pares => ");
    for (int i = 0; i < indicePares; i++)
    {
        printf("| %d | ", vetorPares[i]);
    }
    printf("\n");
    printf("Array de Impares => ");
    for (int i = 0; i < indiceImpares; i++)
    {
        printf("| %d | ", vetorImpares[i]);
    }
}

int main() {
    int tamanho;
    printf("Escolha o tamanho do Array: ");
    scanf("%d", &tamanho);
    int valores[tamanho];
    printf("Digite os valores:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores[i]);     
    }
    separaVetor(valores, tamanho);
    return 0;
}