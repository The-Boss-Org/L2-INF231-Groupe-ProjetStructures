/**
 * @file test_produit_vectoriel.c
 * @brief Tests pour les fonctions de produit vectoriel
 */

#include <stdio.h>
#include <math.h>
#include "../src/matrices/produit_vectoriel.h"

/**
 * @brief Vérifie si deux vecteurs sont égaux à une précision près
 * 
 * @param v1 Premier vecteur
 * @param v2 Deuxième vecteur
 * @param epsilon Précision de la comparaison
 * @return int 1 si les vecteurs sont égaux à epsilon près, 0 sinon
 */
int vecteurs_egaux(const double *v1, const double *v2, double epsilon) {
    if (v1 == NULL || v2 == NULL) {
        return 0;
    }
    
    for (int i = 0; i < 3; i++) {
        if (fabs(v1[i] - v2[i]) > epsilon) {
            return 0;
        }
    }
    return 1;
}

/**
 * @brief Teste la fonction produit_vectoriel avec des cas de test connus
 */
void test_produit_vectoriel() {
    printf("=== Test produit_vectoriel ===\n");
    
    // Test 1: Vecteurs de base i × j = k
    double i[3] = {1, 0, 0};
    double j[3] = {0, 1, 0};
    double k_attendu[3] = {0, 0, 1};
    double resultat[3];
    
    printf("Test 1: i × j = k\n");
    printf("i = ");
    afficher_vecteur(i);
    printf("j = ");
    afficher_vecteur(j);
    
    produit_vectoriel(i, j, resultat);
    printf("Résultat: ");
    afficher_vecteur(resultat);
    
    if (vecteurs_egaux(resultat, k_attendu, 1e-9)) {
        printf("Test 1 réussi!\n\n");
    } else {
        printf("Échec du test 1\n\n");
    }
    
    // Test 2: Vecteurs quelconques
    double v1[3] = {1, 2, 3};
    double v2[3] = {4, 5, 6};
    double attendu[3] = {-3, 6, -3}; // Résultat attendu
    
    printf("Test 2: (1,2,3) × (4,5,6) = (-3,6,-3)\n");
    printf("v1 = ");
    afficher_vecteur(v1);
    printf("v2 = ");
    afficher_vecteur(v2);
    
    produit_vectoriel(v1, v2, resultat);
    printf("Résultat: ");
    afficher_vecteur(resultat);
    
    if (vecteurs_egaux(resultat, attendu, 1e-9)) {
        printf("Test 2 réussi!\n\n");
    } else {
        printf("Échec du test 2\n\n");
    }
    
    // Test 3: Vecteurs colinéaires (produit vectoriel nul)
    double a[3] = {2, 4, 6};
    double b[3] = {1, 2, 3}; // b = 0.5 * a
    double zero[3] = {0, 0, 0};
    
    printf("Test 3: Vecteurs colinéaires (produit nul)\n");
    printf("a = ");
    afficher_vecteur(a);
    printf("b = ");
    afficher_vecteur(b);
    
    produit_vectoriel(a, b, resultat);
    printf("Résultat: ");
    afficher_vecteur(resultat);
    
    if (vecteurs_egaux(resultat, zero, 1e-9)) {
        printf("Test 3 réussi!\n\n");
    } else {
        printf("Échec du test 3\n\n");
    }
}

int main() {
    printf("=== Tests pour les fonctions de produit vectoriel ===\n\n");
    
    test_produit_vectoriel();
    
    printf("=== Fin des tests ===\n");
    return 0;
}
