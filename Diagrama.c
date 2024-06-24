#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <time.h>

// Estrutura para representar um ponto no plano
typedef struct {
    int x;
    int y;
} Ponto;

// Função para alocar uma matriz de linhas x colunas
char** alocaMatriz(int linhas, int colunas) {
    char** matriz = (char*)malloc(linhas * sizeof(char));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (char*)malloc(colunas * sizeof(char));
    }
    return matriz;
}

// Função para liberar a memória alocada para a matriz
void liberaMatriz(char** matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

// Função para imprimir a matriz na tela
void imprimeMatriz(char** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para calcular a distância euclidiana entre dois pontos
double distanciaEuclidiana(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    int linhas, colunas, num_sementes;

    // Solicita ao usuário o número de colunas e linhas
    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    // Solicita ao usuário o número de sementes
    printf("Digite o número de sementes: ");
    scanf("%d", &num_sementes);

    // Aloca a matriz de linhas x colunas
    char** diagrama = alocaMatriz(linhas, colunas);

    // Inicializa a matriz com pontos (.)
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            diagrama[i][j] = '.';
        }
    }

    // Gera sementes aleatórias no diagrama de Voronoi
    srand(time(NULL));
    Ponto* sementes = (Ponto*)malloc(num_sementes * sizeof(Ponto));
    for (int s = 0; s < num_sementes; s++) {
        sementes[s].x = rand() % colunas;
        sementes[s].y = rand() % linhas;
        diagrama[sementes[s].y][sementes[s].x] = 'S'; // Marcador para semente
    }

    // Preenche o diagrama de Voronoi com base na distância euclidiana
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            double menor_distancia = DBL_MAX;
            int indice_semente_mais_proxima = -1;

            // Encontra a semente mais próxima
            for (int s = 0; s < num_sementes; s++) {
                double dist = distanciaEuclidiana(sementes[s], (Ponto){j, i});
                if (dist < menor_distancia) {
                    menor_distancia = dist;
                    indice_semente_mais_proxima = s;
                }
            }

            // Preenche a célula com o marcador da semente mais próxima
            diagrama[i][j] = (char)('A' + indice_semente_mais_proxima);
        }
    }

    // Imprime o diagrama de Voronoi
    printf("\nDiagrama de Voronoi com %d sementes:\n", num_sementes);
    imprimeMatriz(diagrama, linhas, colunas);

    // Libera a memória alocada
    liberaMatriz(diagrama, linhas);
    free(sementes);

    return 0;
}