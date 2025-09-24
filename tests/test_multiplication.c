/**
 * @file test_multiplication.c
 * @brief Tests pour les fonctions de multiplication d'entiers positifs
 */

#include <stdio.h>
#include "../src/tableaux/multiplication.h"

/**
 * @brief Affiche le résultat d'un test de multiplication
 */
void afficher_test_multiplication(int a, int b, int attendu, int (*fonction)(int, int), const char *nom_fonction) {
    printf("%s(%d, %d) = ", nom_fonction, a, b);
    
    int resultat = fonction(a, b);
    
    if (resultat == attendu) {
        printf("%d (OK)\n", resultat);
    } else {
        printf("%d (ERREUR: attendu %d)\n", resultat, attendu);
    }
}

/**
 * @brief Teste la fonction multiplier (additions successives)
 */
void test_multiplier() {
    printf("=== Test multiplier (additions successives) ===\n");
    
    // Cas standards
    afficher_test_multiplication(5, 3, 15, multiplier, "multiplier");
    afficher_test_multiplication(12, 12, 144, multiplier, "multiplier");
    afficher_test_multiplication(7, 1, 7, multiplier, "multiplier");
    afficher_test_multiplication(1, 7, 7, multiplier, "multiplier");
    
    // Cas avec zéro
    afficher_test_multiplication(0, 5, 0, multiplier, "multiplier");
    afficher_test_multiplication(5, 0, 0, multiplier, "multiplier");
    
    // Cas avec nombre négatif (doit retourner -1)
    afficher_test_multiplication(-2, 3, -1, multiplier, "multiplier");
    afficher_test_multiplication(2, -3, -1, multiplier, "multiplier");
    afficher_test_multiplication(-2, -3, -1, multiplier, "multiplier");
}

/**
 * @brief Teste la fonction multiplier_egyptien (méthode égyptienne)
 */
void test_multiplier_egyptien() {
    printf("\n=== Test multiplier_egyptien (méthode égyptienne) ===\n");
    
    // Cas standards
    afficher_test_multiplication(5, 3, 15, multiplier_egyptien, "multiplier_egyptien");
    afficher_test_multiplication(12, 12, 144, multiplier_egyptien, "multiplier_egyptien");
    afficher_test_multiplication(7, 1, 7, multiplier_egyptien, "multiplier_egyptien");
    afficher_test_multiplication(1, 7, 7, multiplier_egyptien, "multiplier_egyptien");
    
    // Cas avec zéro
    afficher_test_multiplication(0, 5, 0, multiplier_egyptien, "multiplier_egyptien");
    afficher_test_multiplication(5, 0, 0, multiplier_egyptien, "multiplier_egyptien");
    
    // Cas avec nombre négatif (doit retourner -1)
    afficher_test_multiplication(-2, 3, -1, multiplier_egyptien, "multiplier_egyptien");
    afficher_test_multiplication(2, -3, -1, multiplier_egyptien, "multiplier_egyptien");
    afficher_test_multiplication(-2, -3, -1, multiplier_egyptien, "multiplier_egyptien");
}

/**
 * @brief Teste la fonction multiplier_recursif
 */
void test_multiplier_recursif() {
    printf("\n=== Test multiplier_recursif ===\n");
    
    // Cas standards
    afficher_test_multiplication(5, 3, 15, multiplier_recursif, "multiplier_recursif");
    afficher_test_multiplication(12, 12, 144, multiplier_recursif, "multiplier_recursif");
    afficher_test_multiplication(7, 1, 7, multiplier_recursif, "multiplier_recursif");
    afficher_test_multiplication(1, 7, 7, multiplier_recursif, "multiplier_recursif");
    
    // Cas avec zéro
    afficher_test_multiplication(0, 5, 0, multiplier_recursif, "multiplier_recursif");
    afficher_test_multiplication(5, 0, 0, multiplier_recursif, "multiplier_recursif");
    
    // Cas avec nombre négatif (doit retourner -1)
    afficher_test_multiplication(-2, 3, -1, multiplier_recursif, "multiplier_recursif");
    afficher_test_multiplication(2, -3, -1, multiplier_recursif, "multiplier_recursif");
    afficher_test_multiplication(-2, -3, -1, multiplier_recursif, "multiplier_recursif");
}

int main() {
    printf("=== Tests pour les fonctions de multiplication ===\n\n");
    
    test_multiplier();
    test_multiplier_egyptien();
    test_multiplier_recursif();
    
    printf("\n=== Fin des tests de multiplication ===\n");
    return 0;
}
