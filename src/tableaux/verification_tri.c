/**
 * @file verification_tri.c
 * @author Preslie Chanel MATAGNE DASSE
 * @brief Implémentation des fonctions de vérification de tri
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "verification_tri.h"

int est_trie_croissant(const int *tableau, int taille) {
    if (tableau == NULL || taille <= 1) {
        return 1; // Un tableau vide ou à un seul élément est considéré comme trié
    }

    for (int i = 0; i < taille - 1; i++) {
        if (tableau[i] > tableau[i + 1]) {
            return 0; // Le tableau n'est pas trié par ordre croissant
        }
    }
    return 1; // Le tableau est trié par ordre croissant
}

int est_trie_decroissant(const int *tableau, int taille) {
    if (tableau == NULL || taille <= 1) {
        return 1; // Un tableau vide ou à un seul élément est considéré comme trié
    }

    for (int i = 0; i < taille - 1; i++) {
        if (tableau[i] < tableau[i + 1]) {
            return 0; // Le tableau n'est pas trié par ordre décroissant
        }
    }
    return 1; // Le tableau est trié par ordre décroissant
}

int est_trie(const int *tableau, int taille) {
    if (tableau == NULL || taille <= 1) {
        return 1; // Un tableau vide ou à un seul élément est considéré comme trié
    }
    
    // Vérifie si le tableau est trié dans un sens ou dans l'autre
    return est_trie_croissant(tableau, taille) || est_trie_decroissant(tableau, taille);
}
