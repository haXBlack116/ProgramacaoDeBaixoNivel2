#include <stdio.h>
#include <string.h>

int main(){
    char opcao[4];
    printf("Coloque o tipo Sanguineo a ser analisado");
    scanf("%s", &opcao);

    if(strcmp(opcao, "A+") == 0){
        printf("Pode doar para: A+ e AB+\n");
        printf("Pode receber de: A+, A-, O+ e O-");
    }
    else if(strcmp(opcao, "A-") == 0){
        printf("Pode doar para: A+, A-, AB+ e AB-\n");
        printf("Pode receber de: A- e O-");
    }
    else if(strcmp(opcao, "B+") == 0){
        printf("Pode doar para: B+, AB+\n");
        printf("Pode receber de: B+, B-, O+ E O-");
    }
    else if(strcmp(opcao, "B-") == 0){
        printf("Pode doar para: B+, B-, AB+, AB-\n");
        printf("Pode receber de: B- e O-");
    }
    else if(strcmp(opcao, "AB+") == 0){
        printf("Pode doar para: AB+\n");
        printf("Pode receber de: Todos os tipos sanguineos");
    }
    else if(strcmp(opcao, "AB-") == 0){
        printf("Pode doar para: AB+ e AB-\n");
        printf("Pode receber de: A-, B-, AB- e O-");
    }
    else if(strcmp(opcao, "O+") == 0){
        printf("Pode doar para: A+, B+, AB+ e O+\n");
        printf("Pode receber de: O+ e O-");
    }
    else if(strcmp(opcao, "O-") == 0){
        printf("Pode doar para: Todos os tipos sanguineos\n");
        printf("Pode receber de: O-");
    } else{
        printf("Tipo invalido!");
    }
    return 0;
    }

