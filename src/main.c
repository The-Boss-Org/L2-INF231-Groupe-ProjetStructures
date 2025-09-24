<invoke name="write_to_file">
<parameter name="TargetFile">c:\Users\Boss Lady\Desktop\L2-INF231-Groupe-ProjetStructures-1\src\main.c</parameter>
<parameter name="CodeContent">/**
 * @file main.c
 * @brief Programme principal avec menu interactif pour les algorithmes fondamentaux
 * @version 1.0
 * @date 2024-09-24
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

// Constantes
#define MAX_TAILLE 100
#define DIM_MATRICE 3

// Prototypes des fonctions
void afficher_menu();
void executer_operation(int choix);
void afficher_tableau(const int *tableau, int taille);
void afficher_matrice(const double matrice[DIM_MATRICE][DIM_MATRICE]);
void somme_matrices();
void produit_matrices();
void recherche_sequentielle_menu();
void multiplication_menu();
void verifier_tableau_trie();
void calculer_median();
void inverser_tableau_menu();
void produit_vectoriel_menu();
void produit_vecteur_matrice();

// Implémentations des fonctions de base
int recherche_sequentielle(const int *tableau, int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return i;
        }
    }
    return -1;
}

int multiplier(int a, int b) {
    int resultat = 0;
    for (int i = 0; i < b; i++) {
        resultat += a;
    }
    return resultat;
}

int multiplier_egyptien(int a, int b) {
    int resultat = 0;
    while (a > 0) {
        if (a % 2 != 0) {
            resultat += b;
        }
        a /= 2;
        b *= 2;
    }
    return resultat;
}

int multiplier_recursif(int a, int b) {
    if (b == 0) return 0;
    if (b == 1) return a;
    return a + multiplier_recursif(a, b - 1);
}

bool est_trie_croissant(const int *tableau, int taille) {
    for (int i = 0; i < taille - 1; i++) {
        if (tableau[i] > tableau[i + 1]) {
            return false;
        }
    }
    return true;
}

bool est_trie_decroissant(const int *tableau, int taille) {
    for (int i = 0; i < taille - 1; i++) {
        if (tableau[i] < tableau[i + 1]) {
            return false;
        }
    }
    return true;
}

float trouver_mediane(int *tableau, int taille) {
    // Tri à bulles simple
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    
    if (taille % 2 == 1) {
        return (float)tableau[taille / 2];
    } else {
        return (float)(tableau[(taille - 1) / 2] + tableau[taille / 2]) / 2.0f;
    }
}

void inverser_tableau(int *tableau, int taille) {
    for (int i = 0; i < taille / 2; i++) {
        int temp = tableau[i];
        tableau[i] = tableau[taille - 1 - i];
        tableau[taille - 1 - i] = temp;
    }
}

void produit_vectoriel(const double v1[3], const double v2[3], double resultat[3]) {
    resultat[0] = v1[1] * v2[2] - v1[2] * v2[1];
    resultat[1] = v1[2] * v2[0] - v1[0] * v2[2];
    resultat[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

// Variables globales
int tableau_global[MAX_TAILLE];
int taille_tableau = 0;

int main() {
    int choix = -1;
    
    printf("=== PROJET SDD2 - ALGORITHMES FONDAMENTAUX ===\n");
    
    while (choix != 0) {
        afficher_menu();
        printf("\nVotre choix : ");
        scanf("%d", &choix);
        
        if (choix != 0) {
            executer_operation(choix);
            printf("\nAppuyez sur Entrée pour continuer...");
            while (getchar() != '\n'); // Vider le buffer
            getchar(); // Attendre l'appui sur Entrée
        }
    }
    
    printf("Merci d'avoir utilisé notre programme. Au revoir !\n");
    return 0;
}

void afficher_menu() {
    system("cls || clear"); // Efface l'écran (Windows/Unix)
    printf("=== PROJET SDD2 - ALGORITHMES FONDAMENTAUX ===\n");
    printf("1. Somme de matrices\n");
    printf("2. Produit de matrices\n");
    printf("3. Recherche séquentielle\n");
    printf("4. Multiplication a × b\n");
    printf("5. Vérifier si tableau trié\n");
    printf("6. Calculer le médian\n");
    printf("7. Inverser un tableau\n");
    printf("8. Produit vectoriel\n");
    printf("9. Produit vecteur × matrice\n");
    printf("0. Quitter\n");
}

void executer_operation(int choix) {
    switch (choix) {
        case 1: somme_matrices(); break;
        case 2: produit_matrices(); break;
        case 3: recherche_sequentielle_menu(); break;
        case 4: multiplication_menu(); break;
        case 5: verifier_tableau_trie(); break;
        case 6: calculer_median(); break;
        case 7: inverser_tableau_menu(); break;
        case 8: produit_vectoriel_menu(); break;
        case 9: produit_vecteur_matrice(); break;
        default: printf("Option non valide. Veuillez réessayer.\n");
    }
}

void afficher_tableau(const int *tableau, int taille) {
    if (taille <= 0) {
        printf("[]\n");
        return;
    }
    
    printf("[");
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) printf(", ");
    }
    printf("]\n");
}

void afficher_matrice(const double matrice[DIM_MATRICE][DIM_MATRICE]) {
    for (int i = 0; i < DIM_MATRICE; i++) {
        printf("|");
        for (int j = 0; j < DIM_MATRICE; j++) {
            printf(" %6.2f ", matrice[i][j]);
        }
        printf("|\n");
    }
}

// Implémentation des différentes opérations
void somme_matrices() {
    printf("\n=== Somme de deux matrices 3x3 ===\n");
    double A[DIM_MATRICE][DIM_MATRICE], B[DIM_MATRICE][DIM_MATRICE], C[DIM_MATRICE][DIM_MATRICE];
    
    printf("Saisie de la première matrice :\n");
    for (int i = 0; i < DIM_MATRICE; i++) {
        for (int j = 0; j < DIM_MATRICE; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }
    
    printf("\nSaisie de la deuxième matrice :\n");
    for (int i = 0; i < DIM_MATRICE; i++) {
        for (int j = 0; j < DIM_MATRICE; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%lf", &B[i][j]);
        }
    }
    
    // Calcul de la somme
    for (int i = 0; i < DIM_MATRICE; i++) {
        for (int j = 0; j < DIM_MATRICE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    // Affichage du résultat
    printf("\nRésultat de A + B :\n");
    afficher_matrice(C);
}

void produit_matrices() {
    printf("\n=== Produit de deux matrices 3x3 ===\n");
    double A[DIM_MATRICE][DIM_MATRICE], B[DIM_MATRICE][DIM_MATRICE], C[DIM_MATRICE][DIM_MATRICE] = {0};
    
    printf("Saisie de la première matrice :\n");
    for (int i = 0; i < DIM_MATRICE; i++) {
        for (int j = 0; j < DIM_MATRICE; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%lf", &A[i][j]);
        }
    }
    
    printf("\nSaisie de la deuxième matrice :\n");
    for (int i = 0; i < DIM_MATRICE; i++) {
        for (int j = 0; j < DIM_MATRICE; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%lf", &B[i][j]);
        }
    }
    
    // Calcul du produit
    for (int i = 0; i < DIM_MATRICE; i++) {
        for (int j = 0; j < DIM_MATRICE; j++) {
            for (int k = 0; k < DIM_MATRICE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Affichage du résultat
    printf("\nRésultat de A × B :\n");
    afficher_matrice(C);
}

void recherche_sequentielle_menu() {
    printf("\n=== Recherche séquentielle ===\n");
    
    if (taille_tableau == 0) {
        printf("Le tableau est vide. Voulez-vous en créer un ? (o/n) ");
        char reponse;
        scanf(" %c", &reponse);
        
        if (reponse != 'o' && reponse != 'O') {
            return;
        }
        
        printf("Combien d'éléments voulez-vous ajouter ? (max %d) ", MAX_TAILLE);
        scanf("%d", &taille_tableau);
        
        if (taille_tableau <= 0 || taille_tableau > MAX_TAILLE) {
            printf("Taille invalide.\n");
            taille_tableau = 0;
            return;
        }
        
        printf("Saisie des éléments du tableau :\n");
        for (int i = 0; i < taille_tableau; i++) {
            printf("tableau[%d] = ", i);
            scanf("%d", &tableau_global[i]);
        }
    }
    
    printf("\nTableau actuel : ");
    afficher_tableau(tableau_global, taille_tableau);
    
    int valeur;
    printf("\nEntrez la valeur à rechercher : ");
    scanf("%d", &valeur);
    
    int position = recherche_sequentielle(tableau_global, taille_tableau, valeur);
    
    if (position != -1) {
        printf("La valeur %d a été trouvée à la position %d.\n", valeur, position);
    } else {
        printf("La valeur %d n'a pas été trouvée dans le tableau.\n", valeur);
    }
}

void multiplication_menu() {
    printf("\n=== Multiplication de deux entiers positifs ===\n");
    int a, b;
    
    printf("Entrez le premier nombre (a > 0) : ");
    scanf("%d", &a);
    
    printf("Entrez le deuxième nombre (b > 0) : ");
    scanf("%d", &b);
    
    if (a < 0 || b < 0) {
        printf("Erreur : les nombres doivent être positifs.\n");
        return;
    }
    
    printf("\nMéthodes de multiplication :\n");
    printf("1. Additions successives\n");
    printf("2. Méthode égyptienne\n");
    printf("3. Méthode récursive\n");
    printf("Votre choix : ");
    
    int choix;
    scanf("%d", &choix);
    
    int resultat = -1;
    switch (choix) {
        case 1:
            resultat = multiplier(a, b);
            printf("Résultat (%d × %d) = %d (additions successives)\n", a, b, resultat);
            break;
        case 2:
            resultat = multiplier_egyptien(a, b);
            printf("Résultat (%d × %d) = %d (méthode égyptienne)\n", a, b, resultat);
            break;
        case 3:
            resultat = multiplier_recursif(a, b);
            printf("Résultat (%d × %d) = %d (méthode récursive)\n", a, b, resultat);
            break;
        default:
            printf("Option invalide.\n");
    }
}

void verifier_tableau_trie() {
    printf("\n=== Vérification si un tableau est trié ===\n");
    
    if (taille_tableau == 0) {
        printf("Le tableau est vide. Voulez-vous en créer un ? (o/n) ");
        char reponse;
        scanf(" %c", &reponse);
        
        if (reponse != 'o' && reponse != 'O') {
            return;
        }
        
        printf("Combien d'éléments voulez-vous ajouter ? (max %d) ", MAX_TAILLE);
        scanf("%d", &taille_tableau);
        
        if (taille_tableau <= 0 || taille_tableau > MAX_TAILLE) {
            printf("Taille invalide.\n");
            taille_tableau = 0;
            return;
        }
        
        printf("Saisie des éléments du tableau :\n");
        for (int i = 0; i < taille_tableau; i++) {
            printf("tableau[%d] = ", i);
            scanf("%d", &tableau_global[i]);
        }
    }
    
    printf("\nTableau actuel : ");
    afficher_tableau(tableau_global, taille_tableau);
    
    if (est_trie_croissant(tableau_global, taille_tableau)) {
        printf("Le tableau est trié par ordre croissant.\n");
    } else if (est_trie_decroissant(tableau_global, taille_tableau)) {
        printf("Le tableau est trié par ordre décroissant.\n");
    } else {
        printf("Le tableau n'est pas trié.\n");
    }
}

void calculer_median() {
    printf("\n=== Calcul de la médiane d'un tableau ===\n");
    
    if (taille_tableau == 0) {
        printf("Le tableau est vide. Voulez-vous en créer un ? (o/n) ");
        char reponse;
        scanf(" %c", &reponse);
        
        if (reponse != 'o' && reponse != 'O') {
            return;
        }
        
        printf("Combien d'éléments voulez-vous ajouter ? (max %d) ", MAX_TAILLE);
        scanf("%d", &taille_tableau);
        
        if (taille_tableau <= 0 || taille_tableau > MAX_TAILLE) {
            printf("Taille invalide.\n");
            taille_tableau = 0;
            return;
        }
        
        printf("Saisie des éléments du tableau :\n");
        for (int i = 0; i < taille_tableau; i++) {
            printf("tableau[%d] = ", i);
            scanf("%d", &tableau_global[i]);
        }
    }
    
    printf("\nTableau actuel : ");
    afficher_tableau(tableau_global, taille_tableau);
    
    // Créer une copie du tableau pour ne pas modifier l'original
    int copie[MAX_TAILLE];
    for (int i = 0; i < taille_tableau; i++) {
        copie[i] = tableau_global[i];
    }
    
    float mediane = trouver_mediane(copie, taille_tableau);
    printf("La médiane du tableau est : %.2f\n", mediane);
}

void inverser_tableau_menu() {
    printf("\n=== Inversion d'un tableau ===\n");
    
    if (taille_tableau == 0) {
        printf("Le tableau est vide. Voulez-vous en créer un ? (o/n) ");
        char reponse;
        scanf(" %c", &reponse);
        
        if (reponse != 'o' && reponse != 'O') {
            return;
        }
        
        printf("Combien d'éléments voulez-vous ajouter ? (max %d) ", MAX_TAILLE);
        scanf("%d", &taille_tableau);
        
        if (taille_tableau <= 0 || taille_tableau > MAX_TAILLE) {
            printf("Taille invalide.\n");
            taille_tableau = 0;
            return;
        }
        
        printf("Saisie des éléments du tableau :\n");
        for (int i = 0; i < taille_tableau; i++) {
            printf("tableau[%d] = ", i);
            scanf("%d", &tableau_global[i]);
        }
    }
    
    printf("\nTableau avant inversion : ");
    afficher_tableau(tableau_global, taille_tableau);
    
    // Création d'une copie pour l'affichage
    int copie[MAX_TAILLE];
    for (int i = 0; i < taille_tableau; i++) {
        copie[i] = tableau_global[i];
    }
    
    // Inversion en place
    inverser_tableau(tableau_global, taille_tableau);
    
    printf("Tableau après inversion : ");
    afficher_tableau(tableau_global, taille_tableau);
    
    // Restauration du tableau original
    for (int i = 0; i < taille_tableau; i++) {
        tableau_global[i] = copie[i];
    }
}

void produit_vectoriel_menu() {
    printf("\n=== Produit vectoriel de deux vecteurs 3D ===\n");
    double v1[3], v2[3], resultat[3];
    
    printf("Saisie du premier vecteur (x y z) : ");
    scanf("%lf %lf %lf", &v1[0], &v1[1], &v1[2]);
    
    printf("Saisie du deuxième vecteur (x y z) : ");
    scanf("%lf %lf %lf", &v2[0], &v2[1], &v2[2]);
    
    produit_vectoriel(v1, v2, resultat);
    
    printf("\nRésultat du produit vectoriel : (%.2f, %.2f, %.2f)\n", 
           resultat[0], resultat[1], resultat[2]);
}

void produit_vecteur_matrice() {
    printf("\n=== Produit d'un vecteur par une matrice 3x3 ===\n");
    double vecteur[3], matrice[3][3], resultat[3] = {0};
    
    printf("Saisie du vecteur (3 composantes) :\n");
    for (int i = 0; i < 3; i++) {
        printf("v[%d] = ", i);
        scanf("%lf", &vecteur[i]);
    }
    
    printf("\nSaisie de la matrice 3x3 :\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%lf", &matrice[i][j]);
        }
    }
    
    // Calcul du produit vecteur × matrice
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultat[i] += vecteur[j] * matrice[j][i];
        }
    }
    
    // Affichage du résultat
    printf("\nRésultat du produit vecteur × matrice : (%.2f, %.2f, %.2f)\n", 
           resultat[0], resultat[1], resultat[2]);
}
</parameter>
<parameter name="EmptyFile">false</parameter>
</invoke>