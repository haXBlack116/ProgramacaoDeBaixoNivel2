#include <stdio.h>
#include <string.h>

typedef struct Struct
{
    int peso;
    float altura;
}dados;

struct fichaAluno
{
    char nome[30];
    float nota1;
};



void imprime(dados P){
    printf("Peso = %d, Altura = %f", P.peso, P.altura);
}

int main() {
    struct fichaAluno aluno;
    printf("Nome do Aluno:");
    scanf("%s", &aluno.nome);

    printf("Nota 1 do Aluno:");
    scanf("%f", &aluno.nota1);

    printf("Nome: %s\n", aluno.nome);
    printf("Nota da Prova 1: %.2f\n" , aluno.nota1);


}