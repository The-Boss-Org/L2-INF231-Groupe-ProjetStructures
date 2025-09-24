/**
 * @file recherche.c
 * @brief Implémentation des fonctions de recherche dans un tableau
 * @version 0.1
 * @date 2024-03-01
 */

#include "recherche.h"
#include <stdlib.h> // Pour la fonction qsort

int recherche_sequentielle(const int *tableau, int taille, int valeur) {
    if (tableau == NULL || taille <= 0) {
        return -1;
    }
    
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return i; // Retourne l'indice de la première occurrence
        }
    }
    
    return -1; // Valeur non trouvée
}

int recherche_sequentielle_triee(const int *tableau, int taille, int valeur) {
    if (tableau == NULL || taille <= 0) {
        return -1;
    }
    
    // Si le tableau est trié par ordre croissant
    if (tableau[0] <= tableau[taille - 1]) {
        for (int i = 0; i < taille && tableau[i] <= valeur; i++) {
            if (tableau[i] == valeur) {
                return i;
            }
            // Si on dépasse la valeur dans un tableau trié, on peut s'arrêter
            if (tableau[i] > valeur) {
                break;
            }
        }
    } 
    // Si le tableau est trié par ordre décroissant
    else {
        for (int i = 0; i < taille && tableau[i] >= valeur; i++) {
            if (tableau[i] == valeur) {
                return i;
            }
            // Si on est en dessous de la valeur dans un tableau trié décroissant, on peut s'arrêter
            if (tableau[i] < valeur) {
                break;
            }
        }
    }
    
    return -1; // Valeur non trouvée
}

int recherche_avec_sentinelle(int *tableau, int taille, int valeur) {
    if (tableau == NULL || taille <= 0) {
        return -1;
    }
    
    // Sauvegarder la dernière valeur
    int derniere_valeur = tableau[taille - 1];
    
    // Remplacer le dernier élément par la valeur recherchée (sentinelle)
    tableau[taille - 1] = valeur;
    
    int i = 0;
    while (tableau[i] != valeur) {
        i++;
    }
    
    // Restaurer la dernière valeur
    tableau[taille - 1] = derniere_valeur;
    
    // Vérifier si on a trouvé la valeur ou si on est arrivé à la sentinelle
    if (i < taille - 1 || tableau[taille - 1] == valeur) {
        return i;
    }
    
    return -1; // Valeur non trouvée
}
