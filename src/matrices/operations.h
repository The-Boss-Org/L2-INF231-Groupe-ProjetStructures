/**
 * @file operations.h
 * @brief Déclarations des opérations sur les matrices pour les exercices 1, 2 et 9
 * @version 1.0
 * @date 2024-09-24
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H

/**
 * @brief Calcule la somme de deux matrices 3x3 (Exercice 1)
 * @param m1 Première matrice
 * @param m2 Deuxième matrice
 * @param resultat Matrice résultat
 */
void somme_matrices(const double m1[3][3], const double m2[3][3], double resultat[3][3]);

/**
 * @brief Calcule le produit de deux matrices 3x3 (Exercice 2)
 * @param m1 Première matrice
 * @param m2 Deuxième matrice
 * @param resultat Matrice résultat
 */
void produit_matrices(const double m1[3][3], const double m2[3][3], double resultat[3][3]);

/**
 * @brief Calcule le produit d'un vecteur par une matrice 3x3 (Exercice 9)
 * @param vecteur Vecteur 3D
 * @param matrice Matrice 3x3
 * @param resultat Vecteur résultat
 */
void produit_vecteur_matrice(const double vecteur[3], const double matrice[3][3], double resultat[3]);

/**
 * @brief Affiche une matrice 3x3 formatée
 * @param matrice Matrice à afficher
 */
void afficher_matrice(const double matrice[3][3]);

#endif // OPERATIONS_H
