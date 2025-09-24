/**
 * @file inversion.h
 * @author Votre Nom
 * @brief Fonctions pour inverser un tableau
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef INVERSION_H
#define INVERSION_H

/**
 * @brief Inverse l'ordre des éléments d'un tableau d'entiers
 * 
 * @param tableau Le tableau à inverser
 * @param taille La taille du tableau
 */
void inverser_tableau(int *tableau, int taille);

/**
 * @brief Crée une copie inversée d'un tableau d'entiers
 * 
 * @param tableau Le tableau source
 * @param taille La taille du tableau
 * @return int* Un nouveau tableau contenant les éléments inversés (doit être libéré par l'appelant)
 */
int* creer_tableau_inverse(const int *tableau, int taille);

#endif // INVERSION_H
