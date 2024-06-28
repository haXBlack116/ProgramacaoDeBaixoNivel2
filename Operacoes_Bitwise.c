#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//Q1
void imprimeBit(unsigned char valor){
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (valor >> i) & 1);
    }
}

//Q2   
void bit5Eh1(unsigned char valor){
    //especifica o bit que quero verificar
    if ((valor & (1 << 5)) != 0){
        printf("Bit 5 eh 1");
    }else{
        printf("Bit 5 nao Eh 1");
    }
}

//Q3
void recebeBit(){
    unsigned char valor = 0;
    int bit;
    int i;
    for (int i = 7; i >= 0; i--)
    {
        do
        {
            scanf("%d", &bit);
        } while (bit != 0 && bit != 1);
            valor |= (bit << i);
    }

    for (int i = 7; i >= 0; i--){    
        printf("%d", (valor >> i) & 1);
}
}

//Q4
void inverteBits(unsigned char valor){
    unsigned char valorInvertido = ~valor;
    unsigned char alta = (valorInvertido >> 4) & 0x0F;  
    unsigned char baixa = valorInvertido & 0x0F;  
    valorInvertido = (baixa << 4) | alta;  
    for (int i = 7; i >= 0; i--) {    
        printf("%d", (valorInvertido >> i) & 1);  
    }
    printf("\n");
}

//Q5
void inverteTodosBits(unsigned char valor){
    unsigned char invertido = ~valor;
    for (int i = 7; i >= 0; i--) {    
        printf("%d", (invertido >> i) & 1);  
    }
}

//Q6
void defineBit3(unsigned char bit, unsigned char valor){
    valor &= 1;
    bit &= ~(1 << 3);
    bit |= (valor << 3);
    for (int i = 7; i >= 0; i--) {    
        printf("%d", (bit >> i) & 1);  
    }
}

//Q7
void limpaBit2(unsigned char bit){
    bit &= ~(1 << 2);
    for (int i = 7; i >= 0; i--) {    
        printf("%d", (bit >> i) & 1);  
    }
}

//Q8
int eh1(unsigned char bit){
    if (bit == 255)
    {
        printf("Todos sao 1");
    }else{
        printf("Nem todos sao 1");
    }
}

//Q9
void alternaBit4(unsigned char bit){
    bit ^= (1 << 4);
    for (int i = 7; i >= 0; i--) {    
        printf("%d", (bit >> i) & 1);  
    }
}


int main(void){
    unsigned char valor = 0b11101111;  // Example value
    alternaBit4(valor);
    return 0;
}

