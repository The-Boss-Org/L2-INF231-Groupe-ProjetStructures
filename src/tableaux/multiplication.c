/**
 * @file multiplication.c
 * @brief Implémentation des fonctions de multiplication d'entiers positifs
 * @version 0.1
 * @date 2024-03-01
 */

#include "multiplication.h"

int multiplier(int a, int b) {
    // Vérification des entrées
    if (a < 0 || b < 0) {
        return -1; // Retourne -1 si l'un des nombres est négatif
    }
    
    int resultat = 0;
    
    // Additionner 'a' à lui-même 'b' fois
    for (int i = 0; i < b; i++) {
        resultat += a;
    }
    
    return resultat;
}

int multiplier_egyptien(int a, int b) {
    // Vérification des entrées
    if (a < 0 || b < 0) {
        return -1;
    }
    
    int resultat = 0;
    
    // Algorithme de multiplication égyptienne (méthode russe)
    while (a > 0) {
        // Si a est impair, on ajoute b au résultat
        if (a % 2 == 1) {
            resultat += b;
        }
        
        // On divise a par 2 (division entière)
        a = a >> 1;  // Équivalent à a = a / 2
        
        // On multiplie b par 2
        b = b << 1;  // Équivalent à b = b * 2
    }
    
    return resultat;
}

// Fonction auxiliaire pour la multiplication récursive
static int multiplier_recursif_aux(int a, int b) {
    // Cas de base
    if (b == 0) {
        return 0;
    }
    
    // Appel récursif
    return a + multiplier_recursif_aux(a, b - 1);
}

int multiplier_recursif(int a, int b) {
    // Vérification des entrées
    if (a < 0 || b < 0) {
        return -1;
    }
    
    // Pour optimiser, on fait en sorte que b soit le plus petit
    if (a < b) {
        return multiplier_recursif_aux(b, a);
    }
    
    return multiplier_recursif_aux(a, b);
}
