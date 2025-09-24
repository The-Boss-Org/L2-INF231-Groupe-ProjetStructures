#ifndef SOMME_MATRICES_H
#define SOMME_MATRICES_H

#define MAX_DIM 5

// Demande à l'utilisateur les dimensions d'une matrice (entre 1 et MAX_DIM)
void demanderDimensions(int *lignes, int *colonnes);

// Saisie des éléments d'une matrice
void saisirMatrice(int lignes, int colonnes, int **matrice, const char *nom);

// Affiche une matrice
void afficherMatrice(int lignes, int colonnes, int **matrice);

// Addition de deux matrices (résultat dans 'resultat')
void additionMatrices(int lignes, int colonnes, int **A, int **B, int **resultat);

// Fonction principale qui orchestre la saisie, l'addition et l'affichage
void sommeMatrices(void);

#endif // SOMME_MATRICES_H
