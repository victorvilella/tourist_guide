/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: victor
 *
 * Created on 19 de Julho de 2016, 12:21
 */

#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

/*
 * Declaração de funções
 */
int main(int arc, char** argv);
void menu_principal();
void ler_entradas(int * a, int * b);
    
/*
 * 
 */
int main(int argc, char** argv) {
    int num_cidades, num_arestas;
    
    menu_principal();
    ler_entradas(&num_cidades, &num_arestas);
    printf("%d - %d", num_cidades, num_arestas);
    
    return (EXIT_SUCCESS);
}

void menu_principal(){
    printf("Aqui entra um menuzinho em ASCII\n");
    return;
}

void ler_entradas(int * a, int * b){
    /**
     * Critica do trabalho (Cidades não podem ultrapassar 100 unidades
     */
    do {
        printf("Ler o numero de cidades: ");
        scanf("%d", a);
    } while(*a > 100);
    
    printf("Ler o numero de estradas: ");
    scanf("%d", b);
    return;
}
