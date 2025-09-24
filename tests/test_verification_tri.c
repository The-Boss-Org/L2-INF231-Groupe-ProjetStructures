/**
 * @file test_verification_tri.c
 * @author Preslie Chanel MATAGNE DASSE
 * @brief Tests pour les fonctions de vérification de tri
 * @version 0.1
 * @date 2024-03-01
 */

#include <stdio.h>
#include <stdlib.h>
#include "../src/tableaux/verification_tri.h"

/**
 * @brief Affiche un tableau d'entiers
 * 
 * @param tableau Le tableau à afficher
 * @param taille La taille du tableau
 */
void afficher_tableau(const int *tableau, int taille) {
    if (tableau == NULL || taille <= 0) {
        printf("[]\n");
        return;
    }
    
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

/**
 * @brief Teste la fonction est_trie_croissant
 */
void test_est_trie_croissant() {
    printf("\n=== Test est_trie_croissant ===\n");
    
    // Tableau vide
    int vide[] = {};
    printf("Test tableau vide: %s\n", 
           est_trie_croissant(vide, 0) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau à un élément
    int un_seul[] = {42};
    printf("Test un seul élément: %s\n", 
           est_trie_croissant(un_seul, 1) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau trié croissant
    int croissant[] = {1, 2, 3, 4, 5};
    printf("Test tableau croissant: %s\n", 
           est_trie_croissant(croissant, 5) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau non trié
    int non_trie[] = {1, 3, 2, 4, 5};
    printf("Test tableau non trié: %s\n", 
           !est_trie_croissant(non_trie, 5) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau décroissant
    int decroissant[] = {5, 4, 3, 2, 1};
    printf("Test tableau décroissant: %s\n", 
           !est_trie_croissant(decroissant, 5) ? "SUCCÈS" : "ÉCHEC");
}

/**
 * @brief Teste la fonction est_trie_decroissant
 */
void test_est_trie_decroissant() {
    printf("\n=== Test est_trie_decroissant ===\n");
    
    // Tableau vide
    int vide[] = {};
    printf("Test tableau vide: %s\n", 
           est_trie_decroissant(vide, 0) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau à un élément
    int un_seul[] = {42};
    printf("Test un seul élément: %s\n", 
           est_trie_decroissant(un_seul, 1) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau trié décroissant
    int decroissant[] = {5, 4, 3, 2, 1};
    printf("Test tableau décroissant: %s\n", 
           est_trie_decroissant(decroissant, 5) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau non trié
    int non_trie[] = {5, 4, 2, 3, 1};
    printf("Test tableau non trié: %s\n", 
           !est_trie_decroissant(non_trie, 5) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau croissant
    int croissant[] = {1, 2, 3, 4, 5};
    printf("Test tableau croissant: %s\n", 
           !est_trie_decroissant(croissant, 5) ? "SUCCÈS" : "ÉCHEC");
}

/**
 * @brief Teste la fonction est_trie
 */
void test_est_trie() {
    printf("\n=== Test est_trie ===\n");
    
    // Tableau vide
    int vide[] = {};
    printf("Test tableau vide: %s\n", 
           est_trie(vide, 0) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau à un élément
    int un_seul[] = {42};
    printf("Test un seul élément: %s\n", 
           est_trie(un_seul, 1) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau trié croissant
    int croissant[] = {1, 2, 3, 4, 5};
    printf("Test tableau croissant: %s\n", 
           est_trie(croissant, 5) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau trié décroissant
    int decroissant[] = {5, 4, 3, 2, 1};
    printf("Test tableau décroissant: %s\n", 
           est_trie(decroissant, 5) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau non trié
    int non_trie[] = {1, 3, 2, 4, 5};
    printf("Test tableau non trié: %s\n", 
           !est_trie(non_trie, 5) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau avec des doublons
    int avec_doublons[] = {1, 2, 2, 3, 4};
    printf("Test tableau avec doublons trié: %s\n", 
           est_trie(avec_doublons, 5) ? "SUCCÈS" : "ÉCHEC");
}

int main() {
    printf("=== Tests pour les fonctions de vérification de tri ===\n");
    
    test_est_trie_croissant();
    test_est_trie_decroissant();
    test_est_trie();
    
    printf("\n=== Fin des tests ===\n");
    return 0;
}
