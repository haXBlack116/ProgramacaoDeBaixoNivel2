#include <stdio.h>
#include <locale.h>

float progamBaixoNivel(float p1, float p2, float t1, float t2){
    float resultado = p1*0.3 + p2*0.3 + t1*0.2 + t2*0.2;
    return resultado;
}

float alest1(float p1, float p2, float tf){
    float resultado = (p1 + p2 + tf) / 3.0;
    return resultado;
}

float estatistica(float p1, float p2, float t1, float t2, float t3){
    float notaTrabalhos = (t1 + t2 + t3) / 3.0;
    float resultado = (p1 + p2 + notaTrabalhos) / 3.0;
    return resultado;
}

int main(void){
char opcao;
float nota1,nota2,nota3,nota4,nota5;

printf("Programa para avaliacao de Diciplinas:");
printf("Qual sua Opcao? => A: Programacao de Baixo Nivel , B: Alest1 , C: Prob. e Estatistica ");
scanf("%c", &opcao);


switch (opcao)
{
case 'A':
    printf("Nota 1:");
    scanf("%f", &nota1);
    printf("Nota 2:");
    scanf("%f", &nota2);
    printf("Nota 3:");
    scanf("%f", &nota3);
    printf("Nota 4:");
    scanf("%f", &nota4);
    
    if (progamBaixoNivel(nota1,nota2,nota3,nota4) >= 7.0)
    {
        printf("Sua nota de G1 foi: %f", progamBaixoNivel(nota1,nota2,nota3,nota4));
        printf("\nVoce foi APROVADO!");
    }else{
        printf("Sua nota de g1 foi: %f", progamBaixoNivel(nota1,nota2,nota3,nota4));
        printf("\nFicou em G2");
        float notag2 = 10.0 - progamBaixoNivel(nota1,nota2,nota3,nota4);
        printf("\nNota para APROVACAO: %f", notag2);
    }        
    break;
    case 'B':
    printf("Nota 1:");
    scanf("%f", &nota1);
    printf("Nota 2:");
    scanf("%f", &nota2);
    printf("Nota 3:");
    scanf("%f", &nota3);
    if (alest1(nota1,nota2,nota3) >= 7.0)
    {
        printf("Sua nota de G1 foi: %f", alest1(nota1,nota2,nota3));
        printf("\nVoce foi APROVADO!");
    }else{
        printf("Sua nota de g1 foi: %f", alest1(nota1,nota2,nota3));
        printf("\nFicou em G2");
        float notag2 = 10.0 - alest1(nota1,nota2,nota3);
        printf("\nNota para APROVACAO: %f", notag2);
    }  
    break;
    case 'C':
    printf("Nota 1:");
    scanf("%f", &nota1);
    printf("Nota 2:");
    scanf("%f", &nota2);
    printf("Nota 3:");
    scanf("%f", &nota3);
    printf("Nota 4:");
    scanf("%f", &nota4);
    printf("Nota 5:");
    scanf("%f", &nota5);
    if (estatistica(nota1,nota2,nota3,nota4,nota5) >= 7.0)
    {
        printf("Sua nota de G1 foi: %f", estatistica(nota1,nota2,nota3,nota4,nota5));
        printf("\nVoce foi APROVADO!");
    }else{
        printf("Sua nota de g1 foi: %f", estatistica(nota1,nota2,nota3,nota4,nota5));
        printf("\nFicou em G2");
        float notag2 = 10.0 - estatistica(nota1,nota2,nota3,nota4,nota5);
        printf("\nNota para APROVACAO: %f", notag2);
    }      
    break;
    default:
    break;
}
return 0;
}
