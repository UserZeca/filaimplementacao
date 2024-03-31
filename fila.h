#ifndef FILA_H
#define FILA_H

typedef struct No No;
typedef struct Fila Fila;

No* criaNo(int dado);
Fila * cria_fila();
void adiciona_fila(Fila *f, int dado);
void exibe_fila(Fila *f);
int fila_vazia(Fila *f);
int remove_fila(Fila *f);
void libera_fila(Fila *f);

#endif