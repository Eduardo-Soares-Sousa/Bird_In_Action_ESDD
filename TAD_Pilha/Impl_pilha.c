#include "TAD_Pilha/Pilha.h"

typedef struct pilha {
    int vetor[MAX];
    int topo;
} Pilha;

Pilha* iniciar_pilha(){
    Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->topo = 0;
    return pilha;
}

bool empilhar(int elem, Pilha *pilha){
    bool empilhou = false;

    if(!esta_cheia(pilha)){
        pilha->vetor[pilha->topo] = elem;
        pilha->topo++;
        empilhou = true;

        return empilhou;
    }
    return empilhou;
}

bool desempilhar(Pilha *pilha){
    bool desempilhou = false;

    if(!esta_vazia(pilha)){
        pilha->topo--;
        desempilhou = true;

        return desempilhou;
    }
    return desempilhou;
}

bool esta_cheia(Pilha *pilha){
    bool cheia = false;

    if(pilha->topo == MAX){
        cheia = true;

        return cheia;
    }
    return cheia;
}

bool esta_vazia(Pilha *pilha){
    bool vazia = false;

    if(pilha->topo == 0){
        vazia = true;

        return vazia;
    }
    return vazia;
}