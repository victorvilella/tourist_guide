#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "graph.h"
#include "main.h"
#define NUM_PASSAGEIROS = 99;

/**
 * 
 * @return int 
 */
int main() {
    int num_cidades, num_arestas, cidade, vizinho, capacidade;
    menu_principal();
    ler_entradas(&num_cidades, &num_arestas);
    Graph g = graph_create(num_cidades);

    cidade = vizinho = 1;
    do {
        printf("Criando a aresta\n");
    } while(criar_aresta(&g));
    

    return (EXIT_SUCCESS);
}

/**
 * 
 */
void menu_principal() {
    printf("Aqui entra um menuzinho em ASCII\n");
    return;
}

/**
 * 
 * @param a
 * @param b
 */
void ler_entradas(int * a, int * b) {
    /**
     * Critica do trabalho (Cidades não podem ultrapassar 100 unidades
     */
    do {
        printf("Ler o numero de cidades: ");
        scanf("%d", a);
    } while (*a > 100);

    do {
        printf("Ler o numero de estradas: ");
        scanf("%d", b);
    } while (*b > *a - 1);
}

bool criar_aresta(Graph * g) {
    int cidade, vizinho, capacidade;
    printf("Entre com o nó: ");
    scanf("%d", &cidade);
    printf("Entre com o vizinho: ");
    scanf("%d", &vizinho);
    if(cidade == 0 && vizinho == 0){
        return false;
    }
    
    printf("Entre com a capacidade da aresta: ");
    scanf("%d", &capacidade);
    graph_add_edge_weight(g, cidade, vizinho, capacidade);
    return true;
}

/**
 * 
 * @param quantidade_passageiros
 * @param cidade_inicio
 * @param cidade_fim
 */
bool transportar_passageiros(Graph * g, int quantidade_passageiros, int cidade_inicio, int cidade_fim){
    
}