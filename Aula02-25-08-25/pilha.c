#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha {
    int dado;
    struct Pilha* prox;
} Pilha;
 
 
Pilha* push(Pilha* topo, int valor) {
    Pilha* novo = (Pilha*) malloc(sizeof(Pilha));
    

    if (novo == NULL) {
        printf("Erro: Memória insuficiente!\n");
        return topo;
    }
    
    novo->dado = valor;
    novo->prox = topo;
    return novo;
}

Pilha* pop(Pilha* topo) {
    if (topo == NULL) {
        printf("Erro: Pilha vazia!\n"); 
        return NULL;
    }
    
    Pilha* temp = topo;
    topo = topo->prox;
    free(temp);
    return topo;
}
}
