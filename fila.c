#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct No{
    No *prox;
    int dado;
}No;

typedef struct Fila{
    No *inicio;
    No *fim;
}Fila;

No* criaNo(int dado){

    No *novoNo = malloc(sizeof(No));

    if(novoNo == NULL){
        printf("Nao foi possivel criar novo Noh\n");
        return NULL;
    }
    novoNo->dado = dado;
    novoNo->prox = NULL;
    return novoNo;
}

Fila * cria_fila(){

    Fila *novaFila = malloc(sizeof(Fila));
    
    if(novaFila == NULL){
        printf("Nao foi possivel criar a fila\n");
        exit(1);
    }
    novaFila->inicio = NULL;
    novaFila->fim = NULL;

    return novaFila;
}

void adiciona_fila(Fila *f, int dado){

    No *novoNo = malloc(sizeof(No));
    No *aux;

    if(novoNo == NULL || f == NULL){
        printf("Nao foi possivel adicionar um novo item\n");
        return ;
    }
    
    novoNo->dado = dado;

    if(f->inicio == NULL){
        f->inicio = novoNo;
    }else{
        f->fim->prox = novoNo;
    }
    f->fim = novoNo;
    f->fim->prox = NULL;
}

void exibe_fila(Fila *f){

    No *aux = f->inicio;
    
    while(aux != NULL){
        printf("%d ",aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}

int fila_vazia(Fila *f){
    return f->inicio == NULL ? 1 : 0;
}

int remove_fila(Fila *f){
    
    if(f == NULL){
        printf("A fila nao foi criada\n");
        exit(1);
    }

    if(fila_vazia(f)){
        printf("Fila vazia\n");
        exit(1);
    }else{
        No *noTemporario = f->inicio;
        int dado = noTemporario->dado;
        f->inicio = f->inicio->prox;
        free(noTemporario);
        return dado;
    }
}

void libera_fila(Fila *f){

    if(f != NULL){
        No * aux;
        while(f->inicio != NULL){
            aux = f->inicio;
            f->inicio = f->inicio->prox;
            free(aux);
        }

        printf("Fila liberada!\n");
    }
}
