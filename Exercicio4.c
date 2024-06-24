#include <stdio.h>
#include <locale.h>

int main(void){
int valor;
int quociente, dividendo, resto;

printf(" Informe o valor de entrada: ");
scanf("%d", &valor);

if (valor > 100)
{
    dividendo = valor;
    quociente = dividendo/100;
    resto = dividendo % 100;
    printf("Notas de 100: %d", quociente);

    dividendo = resto;
    quociente = dividendo/50;
    resto = dividendo % 50;
    printf(",Notas de 50: %d", quociente);

    dividendo = resto;
    quociente = dividendo/20;
    resto = dividendo % 20;
    printf(",Notas de 20: %d", quociente);
}
return 0;
}