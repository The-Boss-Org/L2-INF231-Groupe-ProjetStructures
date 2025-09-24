/**
 * @file test_recherche.c
 * @brief Tests pour les fonctions de recherche dans un tableau
 */

#include <stdio.h>
#include "../src/tableaux/recherche.h"

/**
 * @brief Affiche un tableau d'entiers
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
 * @brief Teste la fonction recherche_sequentielle
 */
void test_recherche_sequentielle() {
    printf("=== Test recherche_sequentielle ===\n");
    
    int tableau[] = {4, 2, 7, 1, 5, 3, 6};
    int taille = 7;
    
    printf("Tableau de test: ");
    afficher_tableau(tableau, taille);
    
    // Test 1: Recherche d'une valeur présente
    int valeur = 5;
    int attendu = 4; // L'indice de 5 dans le tableau
    int resultat = recherche_sequentielle(tableau, taille, valeur);
    
    printf("Recherche de %d: indice %d\n", valeur, resultat);
    if (resultat == attendu) {
        printf("Test 1 réussi!\n");
    } else {
        printf("Échec du test 1\n");
    }
    
    // Test 2: Recherche d'une valeur absente
    valeur = 10;
    attendu = -1;
    resultat = recherche_sequentielle(tableau, taille, valeur);
    
    printf("\nRecherche de %d: indice %d\n", valeur, resultat);
    if (resultat == attendu) {
        printf("Test 2 réussi!\n");
    } else {
        printf("Échec du test 2\n");
    }
    
    // Test 3: Tableau vide
    printf("\nTest avec tableau vide: ");
    resultat = recherche_sequentielle(NULL, 0, 5);
    if (resultat == -1) {
        printf("Test 3 réussi!\n");
    } else {
        printf("Échec du test 3\n");
    }
}

/**
 * @brief Teste la fonction recherche_sequentielle_triee
 */
void test_recherche_sequentielle_triee() {
    printf("\n=== Test recherche_sequentielle_triee ===\n");
    
    // Tableau trié par ordre croissant
    int tableau_croissant[] = {1, 3, 5, 7, 9, 11, 13};
    int taille = 7;
    
    printf("Tableau trié croissant: ");
    afficher_tableau(tableau_croissant, taille);
    
    // Test 1: Recherche d'une valeur présente
    int valeur = 7;
    int attendu = 3; // L'indice de 7 dans le tableau
    int resultat = recherche_sequentielle_triee(tableau_croissant, taille, valeur);
    
    printf("Recherche de %d: indice %d\n", valeur, resultat);
    if (resultat == attendu) {
        printf("Test 1 réussi!\n");
    } else {
        printf("Échec du test 1\n");
    }
    
    // Test 2: Recherche d'une valeur absente
    valeur = 8;
    attendu = -1;
    resultat = recherche_sequentielle_triee(tableau_croissant, taille, valeur);
    
    printf("\nRecherche de %d: indice %d\n", valeur, resultat);
    if (resultat == attendu) {
        printf("Test 2 réussi!\n");
    } else {
        printf("Échec du test 2\n");
    }
}

/**
 * @brief Teste la fonction recherche_avec_sentinelle
 */
void test_recherche_avec_sentinelle() {
    printf("\n=== Test recherche_avec_sentinelle ===\n");
    
    // Création d'un tableau modifiable
    int tableau[] = {4, 2, 7, 1, 5, 3, 6};
    int taille = 7;
    
    // Création d'une copie pour la restauration
    int copie[7];
    for (int i = 0; i < taille; i++) {
        copie[i] = tableau[i];
    }
    
    printf("Tableau de test: ");
    afficher_tableau(tableau, taille);
    
    // Test 1: Recherche d'une valeur présente
    int valeur = 5;
    int attendu = 4; // L'indice de 5 dans le tableau
    int resultat = recherche_avec_sentinelle(tableau, taille, valeur);
    
    printf("Recherche de %d: indice %d\n", valeur, resultat);
    if (resultat == attendu) {
        printf("Test 1 réussi!\n");
    } else {
        printf("Échec du test 1\n");
    }
    
    // Vérifier que le tableau n'a pas été modifié
    int tableau_modifie = 0;
    for (int i = 0; i < taille; i++) {
        if (tableau[i] != copie[i]) {
            tableau_modifie = 1;
            break;
        }
    }
    
    if (!tableau_modifie) {
        printf("Le tableau n'a pas été modifié (bonne pratique)\n");
    } else {
        printf("Attention: le tableau a été modifié!\n");
    }
    
    // Test 2: Recherche d'une valeur absente
    valeur = 10;
    attendu = -1;
    resultat = recherche_avec_sentinelle(tableau, taille, valeur);
    
    printf("\nRecherche de %d: indice %d\n", valeur, resultat);
    if (resultat == attendu) {
        printf("Test 2 réussi!\n");
    } else {
        printf("Échec du test 2\n");
    }
}

int main() {
    printf("=== Tests pour les fonctions de recherche ===\n\n");
    
    test_recherche_sequentielle();
    test_recherche_sequentielle_triee();
    test_recherche_avec_sentinelle();
    
    printf("\n=== Fin des tests de recherche ===\n");
    return 0;
}
