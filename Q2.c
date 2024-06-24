#include <stdio.h>
#include <string.h>

int media(int n1, int n2, int n3){
    return (n1 + n2 + n3)/3;
}

int main() {
    int n1,n2,n3;
    printf("Coloque o valor de n1: ");
    scanf("%d", &n1);
    printf("Coloque o valor de n1: ");
    scanf("%d", &n2);
    printf("Coloque o valor de n1: ");
    scanf("%d", &n3);
    
    printf("A media dos tres valores eh: %d",media(n1,n2,n3));

    return 0;
}