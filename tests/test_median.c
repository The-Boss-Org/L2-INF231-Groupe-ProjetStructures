/**
 * @file test_median.c
 * @author Preslie Chanel MATAGNE DASSE
 * @brief Tests pour les fonctions de calcul de médiane
 * @version 0.1
 * @date 2024-03-01
 */

#include <stdio.h>
#include <stdlib.h>
#include "../src/tableaux/median.h"
#include "../src/tableaux/verification_tri.h"

/**
 * @brief Vérifie si deux nombres flottants sont égaux à epsilon près
 * 
 * @param a Premier nombre
 * @param b Deuxième nombre
 * @param epsilon Précision de la comparaison
 * @return int 1 si les nombres sont égaux à epsilon près, 0 sinon
 */
int egal_avec_epsilon(float a, float b, float epsilon) {
    return (a - b) < epsilon && (b - a) < epsilon;
}

/**
 * @brief Teste la fonction trouver_mediane avec différents cas de test
 */
void test_trouver_mediane() {
    printf("\n=== Test trouver_mediane ===\n");
    
    // Tableau vide
    int vide[] = {};
    float mediane = trouver_mediane(vide, 0);
    printf("Test tableau vide: %s\n", 
           egal_avec_epsilon(mediane, 0.0f, 0.0001f) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau à un élément
    int un_seul[] = {42};
    mediane = trouver_mediane(un_seul, 1);
    printf("Test un seul élément (attendu: 42.0): %s\n", 
           egal_avec_epsilon(mediane, 42.0f, 0.0001f) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau avec nombre impair d'éléments
    int impair[] = {5, 3, 1, 4, 2}; // Trié: 1,2,3,4,5 -> médiane = 3
    mediane = trouver_mediane(impair, 5);
    printf("Test impair d'éléments (attendu: 3.0): %s\n", 
           egal_avec_epsilon(mediane, 3.0f, 0.0001f) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau avec nombre pair d'éléments
    int pair[] = {4, 2, 1, 3, 5, 6}; // Trié: 1,2,3,4,5,6 -> médiane = (3+4)/2 = 3.5
    mediane = trouver_mediane(pair, 6);
    printf("Test pair d'éléments (attendu: 3.5): %s\n", 
           egal_avec_epsilon(mediane, 3.5f, 0.0001f) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau avec des valeurs négatives
    int negatifs[] = {-1, -5, -3, -4, -2}; // Trié: -5,-4,-3,-2,-1 -> médiane = -3
    mediane = trouver_mediane(negatifs, 5);
    printf("Test avec valeurs négatives (attendu: -3.0): %s\n", 
           egal_avec_epsilon(mediane, -3.0f, 0.0001f) ? "SUCCÈS" : "ÉCHEC");
    
    // Tableau avec des doublons
    int doublons[] = {1, 3, 3, 6, 7, 8, 9}; // Médiane = 6
    mediane = trouver_mediane(doublons, 7);
    printf("Test avec doublons (attendu: 6.0): %s\n", 
           egal_avec_epsilon(mediane, 6.0f, 0.0001f) ? "SUCCÈS" : "ÉCHEC");
}

/**
 * @brief Teste la fonction tri_rapide
 */
void test_tri_rapide() {
    printf("\n=== Test tri_rapide ===\n");
    
    // Tableau à trier
    int tableau[] = {10, 7, 8, 9, 1, 5};
    int taille = 6;
    int *copie = (int *)malloc(taille * sizeof(int));
    
    if (copie == NULL) {
        printf("Échec de l'allocation mémoire\n");
        return;
    }
    
    // Faire une copie pour ne pas modifier l'original
    for (int i = 0; i < taille; i++) {
        copie[i] = tableau[i];
    }
    
    // Trier le tableau
    tri_rapide(copie, 0, taille - 1);
    
    // Vérifier si le tableau est trié
    int est_trie_resultat = est_trie_croissant(copie, taille);
    
    printf("Test tri_rapide: %s\n", 
           est_trie_resultat ? "SUCCÈS" : "ÉCHEC");
    
    // Afficher le tableau trié pour vérification visuelle
    printf("Tableau trié: ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", copie[i]);
    }
    printf("\n");
    
    free(copie);
}

int main() {
    printf("=== Tests pour les fonctions de calcul de médiane ===\n");
    
    test_tri_rapide();
    test_trouver_mediane();
    
    printf("\n=== Fin des tests ===\n");
    return 0;
}
