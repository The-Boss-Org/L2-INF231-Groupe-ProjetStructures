/**
 * @file inversion.c
 * @author Votre Nom
 * @brief Implémentation des fonctions d'inversion de tableau
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "inversion.h"
#include <stdlib.h> // Pour malloc et free

void inverser_tableau(int *tableau, int taille) {
    if (tableau == NULL || taille <= 1) {
        return; // Rien à inverser
    }
    
    int debut = 0;
    int fin = taille - 1;
    
    while (debut < fin) {
        // Échanger les éléments aux positions début et fin
        int temp = tableau[debut];
        tableau[debut] = tableau[fin];
        tableau[fin] = temp;
        
        // Déplacer les indices vers le centre
        debut++;
        fin--;
    }
}

int* creer_tableau_inverse(const int *tableau, int taille) {
    if (tableau == NULL || taille <= 0) {
        return NULL;
    }
    
    // Allouer de la mémoire pour le nouveau tableau
    int *inverse = (int*)malloc(taille * sizeof(int));
    if (inverse == NULL) {
        return NULL; // Échec de l'allocation
    }
    
    // Remplir le tableau inverse
    for (int i = 0; i < taille; i++) {
        inverse[i] = tableau[taille - 1 - i];
    }
    
    return inverse;
}
