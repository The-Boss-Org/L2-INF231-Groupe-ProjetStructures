/**
 * @file operations.c
 * @brief Implémentation des opérations sur les matrices pour les exercices 1, 2 et 9
 * @version 1.0
 * @date 2024-09-24
 */

#include "operations.h"
#include <stdio.h>

// Exercice 1: Somme de matrices
void somme_matrices(const double m1[3][3], const double m2[3][3], double resultat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultat[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

// Exercice 2: Produit de matrices
void produit_matrices(const double m1[3][3], const double m2[3][3], double resultat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultat[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resultat[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

// Exercice 9: Produit vecteur × matrice
void produit_vecteur_matrice(const double vecteur[3], const double matrice[3][3], double resultat[3]) {
    for (int i = 0; i < 3; i++) {
        resultat[i] = 0;
        for (int j = 0; j < 3; j++) {
            resultat[i] += vecteur[j] * matrice[j][i];
        }
    }
}

// Fonction utilitaire pour afficher une matrice
void afficher_matrice(const double matrice[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("|");
        for (int j = 0; j < 3; j++) {
            printf(" %6.2f ", matrice[i][j]);
        }
        printf("|\n");
    }
}
