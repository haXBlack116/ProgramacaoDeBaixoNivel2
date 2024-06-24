#include <stdio.h>
#include <string.h>

void ehPar(int n){
    if (n % 2 == 0){
        printf("eh par!");
    } else{
        printf("eh impar!");
    }
}

int main() {
    int n;
    printf("Coloque um numero inteiro de entrada: ");
    scanf("%d", &n);
    ehPar(n);

    return 0;
}