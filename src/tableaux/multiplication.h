/**
 * @file multiplication.h
 * @brief Fonctions de multiplication d'entiers positifs
 * @version 0.1
 * @date 2024-03-01
 */

#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

/**
 * @brief Multiplie deux entiers positifs en utilisant des additions successives
 * 
 * @param a Premier nombre entier positif
 * @param b Deuxième nombre entier positif
 * @return int Le produit de a et b, ou -1 si l'un des nombres est négatif
 */
int multiplier(int a, int b);

/**
 * @brief Multiplie deux entiers positifs en utilisant la méthode égyptienne
 * 
 * @param a Premier nombre entier positif
 * @param b Deuxième nombre entier positif
 * @return int Le produit de a et b, ou -1 si l'un des nombres est négatif
 */
int multiplier_egyptien(int a, int b);

/**
 * @brief Multiplie deux entiers positifs de manière récursive
 * 
 * @param a Premier nombre entier positif
 * @param b Deuxième nombre entier positif
 * @return int Le produit de a et b, ou -1 si l'un des nombres est négatif
 */
int multiplier_recursif(int a, int b);

#endif // MULTIPLICATION_H
