#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura
struct node {
    int nData;
    struct node *pLink;
};

// Declaração da função mostra
void mostra(struct node *p);

// Declaração da função removeNode
void removeNode(struct node **head, int value);

void addNode(struct node **head, int value);

int main(void) {
    struct node *pNode1 = NULL;
    struct node *pNode2 = NULL;
    struct node *pNode3 = NULL;

    // Criar nós e associar dados
    pNode1 = (struct node*) malloc(sizeof(struct node));
    if (pNode1 == NULL) {
        fprintf(stderr, "Erro ao alocar memória para pNode1\n");
        return 1;
    }
    pNode1->nData = 10;

    pNode2 = (struct node*) malloc(sizeof(struct node));
    if (pNode2 == NULL) {
        fprintf(stderr, "Erro ao alocar memória para pNode2\n");
        free(pNode1); // Libera memória alocada previamente
        return 1;
    }
    pNode2->nData = 20;

    pNode3 = (struct node*) malloc(sizeof(struct node));
    if (pNode3 == NULL) {
        fprintf(stderr, "Erro ao alocar memória para pNode3\n");
        free(pNode1); // Libera memória alocada previamente
        free(pNode2);
        return 1;
    }
    pNode3->nData = 30;

    // Conectar nós
    pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;
    pNode3->pLink = NULL;

    
    // Remover um nó específico
    addNode(&pNode1, 5);
    addNode(&pNode1, 2);

    // Mostrar lista após remover
    mostra(pNode1);

    // Liberar memória alocada
    free(pNode1);
    free(pNode2);
    free(pNode3);

    return 0;
}

void removeNode(struct node **head, int value) {
    struct node *temp = *head;
    // Caso especial: o nó a ser removido é a cabeça da lista
    if (temp != NULL && temp->nData == value) {
        *head = temp->pLink; // Muda a cabeça para o próximo nó
        free(temp); // Libera a memória do nó removido
        return;
    }
    // Percorre a lista até encontrar o nó a ser removido
    while (temp != NULL && temp->pLink != NULL) {
        if (temp->pLink->nData == value) {
            struct node *nodeToRemove = temp->pLink; // Nó a ser removido
            temp->pLink = nodeToRemove->pLink; // Ajusta o ponteiro do nó atual para o próximo do nó a ser removido
            free(nodeToRemove); // Libera a memória do nó removido
            return;
        }
        temp = temp->pLink;
    }
}

void addNode(struct node **head, int value){
    struct node *novo = (struct node*) malloc(sizeof(struct node));
    novo -> nData = value;
    novo -> pLink = NULL;
    if (*head == NULL)
    {
        *head = novo;
    }else
    {
        novo->pLink = *head;
        *head = novo;
    }
}


void mostra(struct node *p) {
    if (p) {
        do {
            printf("%d ", p->nData);
            p = p->pLink;
        } while (p);
    } else {
        printf("Lista Vazia\n");
    }
}
