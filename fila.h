#ifndef FILA_H
#define FILA_H

typedef struct No No;
typedef struct Fila Fila;

/**!
 * @brief Função que cria um nó dinamicamente para ser utilizado na estrutura da fila
 * @param dado dado a ser inserido dentro do nó
 * @return Retorna um ponteiro para o nó criado
*/
No* criaNo(int dado);

/**!
 * @brief Função que cria a fila, alocando mémoria para a estrutura de dados e apontando o inicio e o fum para o vazio (NULL).
 * @return retorna um ponteiro para a estrutura fila alocada na memória
*/
Fila * cria_fila();

/**!
 * @brief Função que verifica se a fila está vazia, ou seja, se o seu topo aponta para o vazio (NULL).
 * @return retorna 1 caso esteja vazia, caso contrário retorna 0
*/
int fila_vazia(Fila *f);

/**!
 * @brief Função que insere nó (item/elemento) na fila
 * @param f fila no qual será inserido um novo nó (item/elemento)
 * @param x item/elemento a ser inserido na fila
 * @return (void)
*/
void adiciona_fila(Fila *f, int dado);

/**!
 * @brief Função que remove item/elemento da fila, caso a fila não esteja vazia
 * @param f fila no qual será removido o nó (item/elemento) do inicio
 * @return retorna o dado do nó removido da fila
*/
int remove_fila(Fila *f);

/**!
 * @brief Função que exibe elementos presentes na fila
 * @param f Fila a ser exibida
 * @return (void)
*/
void exibe_fila(Fila *f);

/**!
 * @brief Função que desaloca/libera da memória a fila
 * @param f Fila a ser desalocada/liberada
 * @return (void)
*/
void libera_fila(Fila *f);

#endif