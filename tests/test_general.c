/**
 * @file test_general.c
 * @brief Tests généraux pour le projet SDD2 - Algorithmes Fondamentaux
 * @version 1.0
 * @date 2024-09-24
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../src/tableaux/verification_tri.h"
#include "../src/tableaux/median.h"
#include "../src/tableaux/inversion.h"
#include "../src/tableaux/recherche.h"
#include "../src/tableaux/multiplication.h"
#include "../src/matrices/operations.h"

// Fonction utilitaire pour comparer deux tableaux
bool tableaux_egaux(const int *t1, const int *t2, int taille) {
    for (int i = 0; i < taille; i++) {
        if (t1[i] != t2[i]) {
            return false;
        }
    }
    return true;
}

// Fonction utilitaire pour afficher le résultat d'un test
void afficher_test(const char *nom_test, bool reussi) {
    printf("[%s] %s\n", reussi ? "OK" : "ÉCHEC", nom_test);
}

// Tests pour la recherche séquentielle
void test_recherche_sequentielle() {
    int tableau[] = {5, 2, 8, 1, 9, 3};
    int taille = 6;

    bool test1 = (recherche_sequentielle(tableau, taille, 8) == 2);
    bool test2 = (recherche_sequentielle(tableau, taille, 5) == 0);
    bool test3 = (recherche_sequentielle(tableau, taille, 3) == 5);
    bool test4 = (recherche_sequentielle(tableau, taille, 10) == -1);

    afficher_test("Recherche séquentielle - élément au milieu", test1);
    afficher_test("Recherche séquentielle - premier élément", test2);
    afficher_test("Recherche séquentielle - dernier élément", test3);
    afficher_test("Recherche séquentielle - élément non présent", test4);
}

// Tests pour la multiplication
void test_multiplication() {
    bool test1 = (multiplier(5, 3) == 15);
    bool test2 = (multiplier(0, 10) == 0);
    bool test3 = (multiplier_egyptien(7, 8) == 56);
    bool test4 = (multiplier_egyptien(12, 13) == 156);
    bool test5 = (multiplier_recursif(6, 7) == 42);
    bool test6 = (multiplier_recursif(9, 9) == 81);

    afficher_test("Multiplication - additions successives (5×3=15)", test1);
    afficher_test("Multiplication - par zéro", test2);
    afficher_test("Multiplication égyptienne (7×8=56)", test3);
    afficher_test("Multiplication égyptienne (12×13=156)", test4);
    afficher_test("Multiplication récursive (6×7=42)", test5);
    afficher_test("Multiplication récursive (9×9=81)", test6);
}

// Tests pour la vérification de tri
void test_verification_tri() {
    int croissant[] = {1, 2, 3, 4, 5};
    int decroissant[] = {5, 4, 3, 2, 1};
    int non_trie[] = {1, 3, 2, 5, 4};

    bool test1 = est_trie_croissant(croissant, 5);
    bool test2 = !est_trie_croissant(decroissant, 5);
    bool test3 = !est_trie_croissant(non_trie, 5);
    bool test4 = est_trie_decroissant(decroissant, 5);
    bool test5 = !est_trie_decroissant(croissant, 5);
    bool test6 = !est_trie_decroissant(non_trie, 5);

    afficher_test("Vérification tri croissant - tableau trié", test1);
    afficher_test("Vérification tri croissant - tableau décroissant", test2);
    afficher_test("Vérification tri croissant - tableau non trié", test3);
    afficher_test("Vérification tri décroissant - tableau décroissant", test4);
    afficher_test("Vérification tri décroissant - tableau croissant", test5);
    afficher_test("Vérification tri décroissant - tableau non trié", test6);
}

// Tests pour le calcul de la médiane
void test_mediane() {
    int impair[] = {5, 3, 1, 4, 2};  // Trié: 1,2,3,4,5 → médiane = 3
    int pair[] = {4, 2, 1, 3, 5, 6};  // Trié: 1,2,3,4,5,6 → médiane = 3.5
    int un_seul[] = {7};              // médiane = 7

    float mediane_impair = trouver_mediane(impair, 5);
    float mediane_pair = trouver_mediane(pair, 6);
    float mediane_un = trouver_mediane(un_seul, 1);

    bool test1 = (mediane_impair == 3.0f);
    bool test2 = (mediane_pair == 3.5f);
    bool test3 = (mediane_un == 7.0f);

    afficher_test("Médiane - nombre impair d'éléments", test1);
    afficher_test("Médiane - nombre pair d'éléments", test2);
    afficher_test("Médiane - un seul élément", test3);
}

// Tests pour l'inversion de tableau
void test_inversion() {
    int tableau[] = {1, 2, 3, 4, 5};
    int attendu[] = {5, 4, 3, 2, 1};
    int taille = 5;

    inverser_tableau(tableau, taille);
    bool test_reussi = tableaux_egaux(tableau, attendu, taille);

    afficher_test("Inversion de tableau", test_reussi);

    // On remet le tableau dans l'ordre pour les tests suivants
    inverser_tableau(tableau, taille);
}

// Tests pour le produit vectoriel
void test_produit_vectoriel() {
    double v1[] = {1, 0, 0};
    double v2[] = {0, 1, 0};
    double resultat[3];
    double attendu[] = {0, 0, 1};

    produit_vectoriel(v1, v2, resultat);
    bool test_reussi = (resultat[0] == attendu[0] &&
                       resultat[1] == attendu[1] &&
                       resultat[2] == attendu[2]);

    afficher_test("Produit vectoriel - vecteurs unitaires", test_reussi);
}

// Tests pour le produit vecteur × matrice
void test_produit_vecteur_matrice() {
    double vecteur[] = {1, 2, 3};
    double matrice[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double resultat[3] = {0};
    double attendu[] = {30, 36, 42};  // [1×1 + 2×4 + 3×7, 1×2 + 2×5 + 3×8, 1×3 + 2×6 + 3×9]

    // Calcul du produit vecteur × matrice
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultat[i] += vecteur[j] * matrice[j][i];
        }
    }

    bool test_reussi = (resultat[0] == attendu[0] &&
                       resultat[1] == attendu[1] &&
                       resultat[2] == attendu[2]);

    afficher_test("Produit vecteur × matrice", test_reussi);
}

// Tests pour les opérations sur les matrices
void test_operations_matrices() {
    double A[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    double B[][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    double somme[3][3], produit[3][3] = {{0}};
    double somme_attendue[][3] = {{10, 10, 10}, {10, 10, 10}, {10, 10, 10}};
    double produit_attendu[][3] = {{30, 24, 18}, {84, 69, 54}, {138, 114, 90}};

    // Test de la somme
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somme[i][j] = A[i][j] + B[i][j];
        }
    }

    // Test du produit
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                produit[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Vérification de la somme
    bool test_somme = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (somme[i][j] != somme_attendue[i][j]) {
                test_somme = false;
                break;
            }
        }
        if (!test_somme) break;
    }

    // Vérification du produit
    bool test_produit = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (produit[i][j] != produit_attendu[i][j]) {
                test_produit = false;
                break;
            }
        }
        if (!test_produit) break;
    }

    afficher_test("Somme de matrices", test_somme);
    afficher_test("Produit de matrices", test_produit);
}

// Fonction principale de test
int main() {
    printf("=== TESTS GÉNÉRAUX - PROJET SDD2 ===\n\n");

    printf("1. Tests de recherche séquentielle :\n");
    test_recherche_sequentielle();

    printf("\n2. Tests de multiplication :\n");
    test_multiplication();

    printf("\n3. Tests de vérification de tri :\n");
    test_verification_tri();

    printf("\n4. Tests de calcul de médiane :\n");
    test_mediane();

    printf("\n5. Tests d'inversion de tableau :\n");
    test_inversion();

    printf("\n6. Tests de produit vectoriel :\n");
    test_produit_vectoriel();

    printf("\n7. Tests de produit vecteur × matrice :\n");
    test_produit_vecteur_matrice();

    printf("\n8. Tests d'opérations sur les matrices :\n");
    test_operations_matrices();

    printf("\n=== FIN DES TESTS ===\n");
    return 0;
}
