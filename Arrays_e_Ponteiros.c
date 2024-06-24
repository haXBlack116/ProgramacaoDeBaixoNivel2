#include <stdio.h>
#include <locale.h>

int main(void){

    int a = 50;
    int b = 90;
    int *p_a;
    p_a = &a;

    printf("%p\n", &a);
    printf("%p\n", &b);

    printf("%p\n", &a);
    printf("%d\n", *p_a);

    int vetor[10] = {1,4,6,9,15,16,25,65,33,10};
    
    for(int i = 0; i < 10; i++){
        printf("|%d| ", vetor[i]);
    }

    char mensagem[] = "teste do programa";
    char *p,*p1,*p2;
    p = mensagem;
    p1 = &mensagem[2];

    printf("\n");
    printf("O conteudo apontado pelo ponteiro p1 eh: %c\n", *p1);
    printf("O conteudo apontado pelo ponteiro p eh: %s\n", p);
    printf("O primeiro caracter apontado por p eh: %c\n", *p);
    
    for(p2 = mensagem; *p2 != '\0'; p2++){
        printf("Cada caracter da mensagem 1: %c\n", *p2);
    }

return 0;
}