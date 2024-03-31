#include <stdio.h>
#include "fila.h"


int main(){

    Fila *f = cria_fila();

    adiciona_fila(f, 2);
    adiciona_fila(f, 9);
    adiciona_fila(f, 5);
    adiciona_fila(f, 3);
    exibe_fila(f);

    printf("Removendo elemento: %d\n", remove_fila(f));
    exibe_fila(f);
    printf("Removendo elemento: %d\n", remove_fila(f));
    exibe_fila(f);
    printf("Removendo elemento: %d\n", remove_fila(f));
    exibe_fila(f);
    printf("Removendo elemento: %d\n", remove_fila(f));

    libera_fila(f);
    return 0;
}