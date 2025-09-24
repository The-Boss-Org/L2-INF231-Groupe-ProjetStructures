/**
 * @file verification_tri.h
 * @author Preslie Chanel MATAGNE DASSE
 * @brief Fonctions pour vérifier si un tableau est trié
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef VERIFICATION_TRI_H
#define VERIFICATION_TRI_H

/**
 * @brief Vérifie si un tableau d'entiers est trié par ordre croissant
 * 
 * @param tableau Le tableau à vérifier
 * @param taille La taille du tableau
 * @return int 1 si le tableau est trié par ordre croissant, 0 sinon
 */
int est_trie_croissant(const int *tableau, int taille);

/**
 * @brief Vérifie si un tableau d'entiers est trié par ordre décroissant
 * 
 * @param tableau Le tableau à vérifier
 * @param taille La taille du tableau
 * @return int 1 si le tableau est trié par ordre décroissant, 0 sinon
 */
int est_trie_decroissant(const int *tableau, int taille);

/**
 * @brief Vérifie si un tableau est trié (croissant ou décroissant)
 * 
 * @param tableau Le tableau à vérifier
 * @param taille La taille du tableau
 * @return int 1 si le tableau est trié (dans un sens ou dans l'autre), 0 sinon
 */
int est_trie(const int *tableau, int taille);

#endif // VERIFICATION_TRI_H
