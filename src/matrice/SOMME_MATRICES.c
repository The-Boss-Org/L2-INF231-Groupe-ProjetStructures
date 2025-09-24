#include <stdio.h>
#include <stdlib.h>
#include "SOMME_MATRICES.h"

// Fonction pour demander les dimensions d'une matrice
void demanderDimensions(int *lignes, int *colonnes) {
    do {
        printf("Entrez les dimensions (lignes colonnes) : ");
        scanf("%d %d", lignes, colonnes);

        if (*lignes < 1 || *lignes > MAX_DIM || *colonnes < 1 || *colonnes > MAX_DIM) {
            printf("Dimensions non valides. Veuillez réessayer.\n");
        }
    } while (*lignes < 1 || *lignes > MAX_DIM || *colonnes < 1 || *colonnes > MAX_DIM);
}

// Fonction pour saisir une matrice
void saisirMatrice(int lignes, int colonnes, int **matrice, const char *nom) {
    printf("Entrez les éléments de la matrice %s (%d x %d) :\n", nom, lignes, colonnes);
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("Element [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
    }
}

// Fonction pour afficher une matrice
void afficherMatrice(int lignes, int colonnes, int **matrice) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

// Addition de deux matrices
void additionMatrices(int lignes, int colonnes, int **A, int **B, int **resultat) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            resultat[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Fonction principale
void sommeMatrices(void) {
    int lignes, colonnes;
    int **A, **B, **C;

    // Dimensions des matrices
    demanderDimensions(&lignes, &colonnes);

    // Allocation mémoire
    A = (int **)malloc(lignes * sizeof(int *));
    B = (int **)malloc(lignes * sizeof(int *));
    C = (int **)malloc(lignes * sizeof(int *));
    for (int i = 0; i < lignes; i++) {
        A[i] = (int *)malloc(colonnes * sizeof(int));
        B[i] = (int *)malloc(colonnes * sizeof(int));
        C[i] = (int *)malloc(colonnes * sizeof(int));
    }

    // Saisie
    saisirMatrice(lignes, colonnes, A, "A");
    saisirMatrice(lignes, colonnes, B, "B");

    // Calcul
    additionMatrices(lignes, colonnes, A, B, C);

    // Affichage
    printf("Somme des matrices :\n");
    afficherMatrice(lignes, colonnes, C);

    // Libération mémoire
    for (int i = 0; i < lignes; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);
}
