#include <stdio.h>
#include <string.h>


int main() {
    char vetor[] = {'a', 'e', 'i', 'o', 'u'};
    char *ptr;

    ptr = &vetor[0];
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    for (int i = 0; i < tamanho; i++)
    {
        printf("%p\n", vetor[i]);
    }
    
}