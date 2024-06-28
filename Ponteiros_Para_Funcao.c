#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Q1
int multiplica(int valor1, int valor2){
    return valor1*valor2;
}

//Q2
int bitsIguaisA1(unsigned char valor){
    int contagem = 0;
    //o laço continua enquanto o valor não for 0 em binario
    for (int i = 7; i >= 0; i--)
    {
        if ((valor & (1 << i)) != 0)
        {
            contagem++;
        }
    }
    return contagem;
}


int(*ponteiro_para_bitsIguaisA1)(unsigned char);

int(*ponteiro_para_multiplica)(int,int);

int main(void){
   ponteiro_para_bitsIguaisA1 = bitsIguaisA1;
   unsigned char val = 0b11001110;
   int resultado = ponteiro_para_bitsIguaisA1(val);
   printf("%d", resultado);
   return 0;
}