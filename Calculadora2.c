#include <stdio.h>
#include <locale.h>

int main(void){

float valA, valB, resultado;
char opcao;
setlocale(LC_ALL,"");

printf("\ninforme a operacao -> + = soma, - = subtracao, * = multiplicacao, / = divisao");
scanf("%c", &opcao);

printf("informe o valor da parcela A: ");
scanf("%f", &valA);

printf("informe o valor da parcela B: ");
scanf("%f", &valB);

switch (opcao){
case '+':**
    resultado = valA + valB;
    break;
case '-':
    resultado = valA - valB;
    break;
case '*':
    resultado = valA * valB;
    break;
case '/':
    resultado = valA / valB;
    break;
default:
    break;
}
printf("%f %c %f = %f\n",valA, opcao, valB, resultado);
return 0;
}
