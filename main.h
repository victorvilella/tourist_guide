/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.h
 * Author: victor
 *
 * Created on 19 de Julho de 2016, 16:18
 */

#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* MAIN_H */


int  main();
void menu_principal();
void ler_entradas(int * a, int * b);
void montar_grafo(Graph * g, int cidade, int peso);
bool criar_aresta(Graph * g);
bool transportar_passageiros(Graph * g, int quantidade_passageiros, int cidade_inicio, int cidade_fim);