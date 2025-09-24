#include <stdio.h>
#include <stdlib.h>
#include "matvec.h"

void matvec(void) {
    int n;

    printf("Entrez la dimension de la matrice (n x n) : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Dimension non valide.\n");
        return;
    }

    // Allocation dynamique
    int **A = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
    }

    int *x = (int *)malloc(n * sizeof(int));
    int *y = (int *)malloc(n * sizeof(int));

    // Lire la matrice
    printf("Entrez les elements de la matrice %dx%d :\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Lire le vecteur
    printf("Entrez les elements du vecteur de taille %d :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Calculer y = A * x
    for (int i = 0; i < n; i++) {
        y[i] = 0;
        for (int j = 0; j < n; j++) {
            y[i] += A[i][j] * x[j];
        }
    }

    // Afficher le résultat
    printf("Resultat du produit matrice * vecteur :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", y[i]);
    }

    // Libération mémoire
    for (int i = 0; i < n; i++) {
        free(A[i]);
    }
    free(A);
    free(x);
    free(y);
}
