#include <stdio.h>
#include <locale.h>

int main(void){

int valA;
int valB;
int opcao;
int resultado;
setlocale(LC_ALL,"");

printf("\ninforme a operacao -> 0 = soma, 1 = subtracao, 2 = multiplicacao, 3 = divisao");
scanf("%d", &opcao);

if(opcao > 3){
    printf("Opcao invalida");
}
else{

printf("informe o valor da parcela A: ");
scanf("%d", &valA);

printf("informe o valor da parcela B: ");
scanf("%d", &valB);

switch (opcao){
case 0:
    resultado = valA + valB;
    break;
case 1:
    resultado = valA - valB;
    break;
case 2:
    resultado = valA * valB;
    break;
case 3:
    resultado = valA / valB;
    break;
default:
    break;
}
printf("O resultado eh %d", resultado);
return 0;
}
}