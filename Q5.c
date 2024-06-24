#include <stdio.h>
#include <string.h>

void ehPar(int valores[10]){
    printf("Numeros Pares: ");
    for(int i = 0; i < 10; i++){
    if (valores[i] % 2 == 0){
        printf("%d, ", valores[i]);
    }
}
}

float media(int valores[10]){
    float soma = 0;
    float numeroTermos = 0;
    for (int i = 0; i < 10; i++)
    {
        soma += valores[i];
        numeroTermos++;
    }
    return soma/numeroTermos;
}

int maior(int valores[10]){
    int maiorVal = valores[0];
    for (int i = 0; i < 10; i++){
        if (valores[i] > maiorVal){
            maiorVal = valores[i];
        }
    }
    return maiorVal;
}

void ordenar(int valores[10]){
    int aux;
    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++)
        {
            if (valores[i] > valores[j])
            {
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }
}

void mostrarVetor(int valores[10]){
    for (int i = 0; i < 10; i++)
    {
        printf("| %d | ", valores[i]);
    }
}


int main() {
    int valores[10];
    printf("Digite 10 valores:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &valores[i]);     
    }

    printf("O maior valor eh: %d", maior(valores));
    printf("\n");
    printf("A media dos valores eh: %f\n", media(valores));
    ordenar(valores);
    mostrarVetor(valores);
    printf("\n");
    ehPar(valores);
    
    return 0;
}