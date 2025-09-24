/**
 * @file produit_vectoriel.c
 * @author Votre Nom
 * @brief Implémentation des fonctions pour le calcul du produit vectoriel
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "produit_vectoriel.h"
#include <stdio.h> // Pour printf

void produit_vectoriel(const double *vecteur1, const double *vecteur2, double *resultat) {
    // Vérification des pointeurs NULL
    if (vecteur1 == NULL || vecteur2 == NULL || resultat == NULL) {
        return;
    }
    
    // Calcul des composantes du produit vectoriel
    // resultat = vecteur1 × vecteur2
    resultat[0] = vecteur1[1] * vecteur2[2] - vecteur1[2] * vecteur2[1]; // Composante x
    resultat[1] = vecteur1[2] * vecteur2[0] - vecteur1[0] * vecteur2[2]; // Composante y
    resultat[2] = vecteur1[0] * vecteur2[1] - vecteur1[1] * vecteur2[0]; // Composante z
}

void afficher_vecteur(const double *vecteur) {
    if (vecteur == NULL) {
        printf("Vecteur NULL\n");
        return;
    }
    
    printf("(%.2f, %.2f, %.2f)\n", vecteur[0], vecteur[1], vecteur[2]);
}
