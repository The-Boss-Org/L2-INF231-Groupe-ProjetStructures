/**
 * @file main.c
 * @author Preslie Chanel MATAGNE DASSE
 * @brief Programme principal démontrant l'utilisation des fonctions de tri et de médiane
 * @version 0.1
 * @date 2024-03-01
 */

#include <stdio.h>
#include <stdlib.h>
#include "tableaux/verification_tri.h"
#include "tableaux/median.h"

/**
 * @brief Affiche un tableau d'entiers
 * 
 * @param tableau Le tableau à afficher
 * @param taille La taille du tableau
 */
void afficher_tableau(const int *tableau, int taille) {
    if (tableau == NULL || taille <= 0) {
        printf("[]\n");
        return;
    }
    
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

/**
 * @brief Fonction principale
 */
int main() {
    printf("=== Démonstration des fonctions de tri et de médiane ===\n\n");
    
    // Exemple 1: Vérification de tri
    printf("=== Vérification de tri ===\n");
    int tableau1[] = {1, 2, 3, 4, 5};
    int taille1 = 5;
    
    printf("Tableau 1: ");
    afficher_tableau(tableau1, taille1);
    
    if (est_trie_croissant(tableau1, taille1)) {
        printf("Le tableau est trié par ordre croissant.\n");
    } else if (est_trie_decroissant(tableau1, taille1)) {
        printf("Le tableau est trié par ordre décroissant.\n");
    } else {
        printf("Le tableau n'est pas trié.\n");
    }
    
    // Exemple 2: Calcul de la médiane
    printf("\n=== Calcul de la médiane ===\n");
    int tableau2[] = {5, 3, 1, 4, 2};
    int taille2 = 5;
    
    printf("Tableau 2: ");
    afficher_tableau(tableau2, taille2);
    
    float mediane = trouver_mediane(tableau2, taille2);
    printf("La médiane est: %.2f\n", mediane);
    
    // Exemple 3: Tableau avec un nombre pair d'éléments
    printf("\n=== Exemple avec un nombre pair d'éléments ===\n");
    int tableau3[] = {4, 2, 1, 3, 5, 6};
    int taille3 = 6;
    
    printf("Tableau 3: ");
    afficher_tableau(tableau3, taille3);
    
    mediane = trouver_mediane(tableau3, taille3);
    printf("La médiane est: %.2f\n", mediane);
    
    return 0;
}
