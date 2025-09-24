#include <stdio.h>
#include <stdlib.h>
#include "matvec.h"


void test_matvec()
 {
    int i, j, n;
    int A[5][5];   // matrice max 5x5
    int x[5];      // vecteur max taille 5
    int y[5];      // résultat

    // Choix de la dimension
    printf("Choisissez la dimension (2 ou 3 ou ...) : ");
    scanf("%d", &n);

    if (n < 1 || n > 5) {
        printf("Dimension non valide.\n");
    }

    // Lire la matrice
    printf("Entrez les elements de la matrice %dx%d :\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Lire le vecteur
    printf("Entrez les elements du vecteur de taille %d :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    // Calculer y = A * x
    for (i = 0; i < n; i++) {
        y[i] = 0; // initialiser la somme
        for (j = 0; j < n; j++) {
            y[i] += A[i][j] * x[j];
        }
    }

    // Afficher le résultat
    printf("Resultat du produit matrice * vecteur :\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", y[i]);
    }
}
