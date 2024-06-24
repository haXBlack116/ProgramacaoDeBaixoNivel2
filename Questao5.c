#include <stdio.h>
#include <string.h>

//Faça um programa que a partir de um array com 10 números informe 
//para o usuário: a) maior valor; b) média dos valores;
//c) os valores dispostos em ordem crescente; d) todos os valores pares;

int maiorValor(int valores[10]){
    int maiorValor = valores[0];
    for (int i = 0; i < 10; i++)
    {
        if (valores[i] > maiorValor)
        {
            maiorValor = valores[i];
        }
    }
    return maiorValor;
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

int main() {
    int vetor[10] = {10,20,30,40,50,60,70,80,90,100};
    printf("%d", maiorValor(vetor));
    printf("\n");
    printf("%f", media(vetor));

}