#include <stdio.h>
#include <string.h>

float raizQuadrada(float valor) {
    float resultado = valor;
    for (int i = 0; i < 10; ++i) {
        resultado = resultado / 2 + valor / (2 * resultado);
    }
    return resultado;
}

int main() {
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    num = raizQuadrada(num);
    printf("A raiz quadrada eh: %f\n", num);
    return 0;
}