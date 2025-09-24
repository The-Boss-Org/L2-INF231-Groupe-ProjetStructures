/**
 * @file median.c
 * @author Preslie Chanel MATAGNE DASSE
 * @brief Implémentation des fonctions pour trouver la médiane d'un tableau
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "median.h"
#include <stdlib.h> // Pour la fonction abs()

void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partitionner(int *tableau, int debut, int fin) {
    int pivot = tableau[fin]; // On choisit le dernier élément comme pivot
    int i = (debut - 1);     // Index du plus petit élément

    for (int j = debut; j <= fin - 1; j++) {
        // Si l'élément actuel est plus petit que le pivot
        if (tableau[j] < pivot) {
            i++; // Incrémenter l'index du plus petit élément
            echanger(&tableau[i], &tableau[j]);
        }
    }
    echanger(&tableau[i + 1], &tableau[fin]);
    return (i + 1);
}

void tri_rapide(int *tableau, int debut, int fin) {
    if (debut < fin) {
        // Partitionner le tableau et obtenir l'indice du pivot
        int indice_pivot = partitionner(tableau, debut, fin);

        // Trier récursivement les éléments avant et après le pivot
        tri_rapide(tableau, debut, indice_pivot - 1);
        tri_rapide(tableau, indice_pivot + 1, fin);
    }
}

float trouver_mediane(int *tableau, int taille) {
    if (tableau == NULL || taille <= 0) {
        return 0.0f; // Valeur par défaut en cas de tableau invalide
    }

    // Créer une copie du tableau pour ne pas modifier l'original
    int *copie = (int *)malloc(taille * sizeof(int));
    if (copie == NULL) {
        return 0.0f; // Échec de l'allocation mémoire
    }

    // Copier les éléments
    for (int i = 0; i < taille; i++) {
        copie[i] = tableau[i];
    }

    // Trier le tableau
    tri_rapide(copie, 0, taille - 1);

    float mediane;
    if (taille % 2 == 0) {
        // Si le nombre d'éléments est pair, moyenne des deux éléments du milieu
        mediane = (copie[(taille - 1) / 2] + copie[taille / 2]) / 2.0f;
    } else {
        // Si le nombre d'éléments est impair, élément du milieu
        mediane = copie[taille / 2];
    }

    // Libérer la mémoire allouée
    free(copie);

    return mediane;
}
