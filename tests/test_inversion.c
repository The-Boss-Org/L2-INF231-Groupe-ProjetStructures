/**
 * @file test_inversion.c
 * @brief Tests pour les fonctions d'inversion de tableau
 */

#include <stdio.h>
#include <stdlib.h>
#include "../src/tableaux/inversion.h"

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
 * @brief Teste la fonction inverser_tableau
 */
void test_inverser_tableau() {
    printf("=== Test inverser_tableau ===\n");
    
    // Test avec un tableau pair
    int tableau1[] = {1, 2, 3, 4, 5, 6};
    int taille1 = 6;
    
    printf("Avant inversion: ");
    afficher_tableau(tableau1, taille1);
    
    inverser_tableau(tableau1, taille1);
    
    printf("Après inversion: ");
    afficher_tableau(tableau1, taille1);
    
    // Test avec un tableau impair
    int tableau2[] = {10, 20, 30, 40, 50};
    int taille2 = 5;
    
    printf("\nAvant inversion: ");
    afficher_tableau(tableau2, taille2);
    
    inverser_tableau(tableau2, taille2);
    
    printf("Après inversion: ");
    afficher_tableau(tableau2, taille2);
    
    // Test avec un seul élément
    int tableau3[] = {42};
    int taille3 = 1;
    
    printf("\nAvant inversion: ");
    afficher_tableau(tableau3, taille3);
    
    inverser_tableau(tableau3, taille3);
    
    printf("Après inversion: ");
    afficher_tableau(tableau3, taille3);
}

/**
 * @brief Teste la fonction creer_tableau_inverse
 */
void test_creer_tableau_inverse() {
    printf("\n=== Test creer_tableau_inverse ===\n");
    
    // Test avec un tableau pair
    int tableau1[] = {1, 2, 3, 4, 5, 6};
    int taille1 = 6;
    
    printf("Tableau original: ");
    afficher_tableau(tableau1, taille1);
    
    int *inverse1 = creer_tableau_inverse(tableau1, taille1);
    
    if (inverse1 != NULL) {
        printf("Tableau inverse: ");
        afficher_tableau(inverse1, taille1);
        free(inverse1); // Ne pas oublier de libérer la mémoire
    } else {
        printf("Échec de l'allocation mémoire\n");
    }
    
    // Test avec un tableau vide
    int *tableau2 = NULL;
    int taille2 = 0;
    
    printf("\nTest avec tableau vide: ");
    int *inverse2 = creer_tableau_inverse(tableau2, taille2);
    
    if (inverse2 == NULL) {
        printf("Test réussi: NULL retourné pour un tableau NULL\n");
    } else {
        printf("Échec du test: NULL attendu\n");
        free(inverse2);
    }
}

int main() {
    printf("=== Tests pour les fonctions d'inversion de tableau ===\n\n");
    
    test_inverser_tableau();
    test_creer_tableau_inverse();
    
    printf("\n=== Fin des tests ===\n");
    return 0;
}
