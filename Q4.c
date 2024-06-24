#include <stdio.h>
#include <string.h>

void maiorvalor(float n1, float n2, float n3){
    if (n1 > n2 && n1 > n3){
        printf("O maior valor eh %f", n1);
    } else if (n2 > n1 && n2 > n3){
        printf("O maior valor eh %f", n2);
    } else{
        printf("O maior valor eh %f", n3);
    }
}

void menorvalor(float n1, float n2, float n3){
    if (n1 < n2 && n1 < n3){
        printf("O menor valor eh %f", n1);
    } else if (n2 < n1 && n2 < n3){
        printf("O menor valor eh %f", n2);
    } else{
        printf("O menor valor eh %f", n3);
    }
}

void intermediario(float n1, float n2, float n3){
    if (n1 > n2 && n1 < n3){
        printf("O valor intemediario eh %f", n1);
    } else if (n2 > n1 && n2 < n3){
        printf("O valor intemediario eh %f", n2);
    } else{
        printf("O valor intemediario eh %f", n3);
    }
}


int main() {
    float n1,n2,n3;   
    printf("Coloque o valor de n1: ");
    scanf("%f", &n1);
    printf("Coloque o valor de n1: ");
    scanf("%f", &n2);
    printf("Coloque o valor de n1: ");
    scanf("%f", &n3);

    menorvalor(n1,n2,n3);
    intermediario(n1,n2,n3);
    maiorvalor(n1,n2,n3);

    return 0;
}