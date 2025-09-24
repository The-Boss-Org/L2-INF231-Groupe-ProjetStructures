/**
 * @file median.h
 * @author Preslie Chanel MATAGNE DASSE
 * @brief Fonctions pour trouver la médiane d'un tableau
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef MEDIAN_H
#define MEDIAN_H

/**
 * @brief Échange deux éléments d'un tableau d'entiers
 * 
 * @param a Premier élément
 * @param b Deuxième élément
 */
void echanger(int *a, int *b);

/**
 * @brief Partitionne un tableau pour le tri rapide (quicksort)
 * 
 * @param tableau Le tableau à partitionner
 * @param debut Indice de début de la partition
 * @param fin Indice de fin de la partition
 * @return int L'indice du pivot après partition
 */
int partitionner(int *tableau, int debut, int fin);

/**
 * @brief Trie un tableau d'entiers en utilisant l'algorithme de tri rapide (quicksort)
 * 
 * @param tableau Le tableau à trier
 * @param debut Indice de début du tri
 * @param fin Indice de fin du tri
 */
void tri_rapide(int *tableau, int debut, int fin);

/**
 * @brief Trouve la valeur médiane d'un tableau d'entiers
 * 
 * @param tableau Le tableau d'entiers
 * @param taille La taille du tableau
 * @return float La valeur médiane du tableau
 */
float trouver_mediane(int *tableau, int taille);

#endif // MEDIAN_H
