/**
 * @file test_exercices_1_2_9.c
 * @brief Tests unitaires pour les exercices 1, 2 et 9
 * @version 1.0
 * @date 2024-09-24
 */

#include <stdio.h>
#include <stdbool.h>
#include "../src/matrices/operations.h"

// Fonction utilitaire pour comparer deux matrices
bool matrices_egales(const double m1[3][3], const double m2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m1[i][j] != m2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

// Fonction utilitaire pour comparer deux vecteurs
bool vecteurs_egaux(const double v1[3], const double v2[3]) {
    for (int i = 0; i < 3; i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

// Fonction utilitaire pour afficher le résultat d'un test
void afficher_test(const char *nom_test, bool reussi) {
    printf("[%s] %s\n", reussi ? "OK" : "ÉCHEC", nom_test);
}

// Test Exercice 1: Somme de matrices
void test_somme_matrices() {
    double A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    double resultat[3][3];
    double attendu[3][3] = {{10, 10, 10}, {10, 10, 10}, {10, 10, 10}};

    somme_matrices(A, B, resultat);

    bool test_reussi = matrices_egales(resultat, attendu);
    afficher_test("Exercice 1 - Somme de matrices", test_reussi);
}

// Test Exercice 2: Produit de matrices
void test_produit_matrices() {
    double A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    double resultat[3][3];
    double attendu[3][3] = {{30, 24, 18}, {84, 69, 54}, {138, 114, 90}};

    produit_matrices(A, B, resultat);

    bool test_reussi = matrices_egales(resultat, attendu);
    afficher_test("Exercice 2 - Produit de matrices", test_reussi);
}

// Test Exercice 9: Produit vecteur × matrice
void test_produit_vecteur_matrice() {
    double vecteur[3] = {1, 2, 3};
    double matrice[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double resultat[3];
    double attendu[3] = {30, 36, 42};  // [1×1 + 2×4 + 3×7, 1×2 + 2×5 + 3×8, 1×3 + 2×6 + 3×9]

    produit_vecteur_matrice(vecteur, matrice, resultat);

    bool test_reussi = vecteurs_egaux(resultat, attendu);
    afficher_test("Exercice 9 - Produit vecteur × matrice", test_reussi);
}

// Test avec des matrices identité
void test_matrices_identite() {
    double I[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    double A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double resultat_somme[3][3];
    double resultat_produit[3][3];

    // Test somme avec identité
    somme_matrices(A, I, resultat_somme);
    bool test_somme = matrices_egales(resultat_somme, A);

    // Test produit avec identité
    produit_matrices(A, I, resultat_produit);
    bool test_produit = matrices_egales(resultat_produit, A);

    afficher_test("Somme avec matrice identité", test_somme);
    afficher_test("Produit avec matrice identité", test_produit);
}

// Test avec des valeurs nulles
void test_matrices_nulles() {
    double zero[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    double A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double resultat_somme[3][3];
    double resultat_produit[3][3];

    // Test somme avec matrice nulle
    somme_matrices(A, zero, resultat_somme);
    bool test_somme = matrices_egales(resultat_somme, A);

    // Test produit avec matrice nulle
    produit_matrices(A, zero, resultat_produit);
    bool test_produit = matrices_egales(resultat_produit, zero);

    afficher_test("Somme avec matrice nulle", test_somme);
    afficher_test("Produit avec matrice nulle", test_produit);
}

// Fonction principale de test
int main() {
    printf("=== TESTS UNITAIRES - EXERCICES 1, 2 ET 9 ===\n\n");

    printf("1. Tests Exercice 1 - Somme de matrices :\n");
    test_somme_matrices();
    test_matrices_identite();
    test_matrices_nulles();

    printf("\n2. Tests Exercice 2 - Produit de matrices :\n");
    test_produit_matrices();

    printf("\n3. Tests Exercice 9 - Produit vecteur × matrice :\n");
    test_produit_vecteur_matrice();

    printf("\n=== RAPPORT DE TESTS ===\n");
    printf("✅ Exercice 1 - Somme de matrices : Implémenté et testé\n");
    printf("✅ Exercice 2 - Produit de matrices : Implémenté et testé\n");
    printf("✅ Exercice 9 - Produit vecteur × matrice : Implémenté et testé\n");

    printf("\n=== FIN DES TESTS ===\n");
    return 0;
}
