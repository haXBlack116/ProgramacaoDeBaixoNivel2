#include <stdio.h>
#include <locale.h>

void bubbleSort(int *array, int size) {
    int *ptr, temp;
    for (int i = 0; i < size - 1; i++) {
        ptr = array;
        for (int j = 0; j < size - i - 1; j++) {
            if (*ptr > *(ptr + 1)) {
                temp = *ptr;
                *ptr = *(ptr + 1);
                *(ptr + 1) = temp;
            }
            ptr++;
        }
    }
}

int main() {
    int vetor[10] = {5, 2, 9, 1, 7, 4, 8, 3, 6, 10};

    printf("Vetor original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    bubbleSort(vetor, 10);

    printf("Vetor ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}