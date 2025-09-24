/**
 * @file recherche.h
 * @brief Fonctions de recherche dans un tableau
 * @version 0.1
 * @date 2024-03-01
 */

#ifndef RECHERCHE_H
#define RECHERCHE_H

/**
 * @brief Recherche séquentielle d'un élément dans un tableau non trié
 * 
 * @param tableau Le tableau dans lequel effectuer la recherche
 * @param taille La taille du tableau
 * @param valeur La valeur à rechercher
 * @return int L'indice de la première occurrence de la valeur, ou -1 si non trouvée
 */
int recherche_sequentielle(const int *tableau, int taille, int valeur);

/**
 * @brief Recherche séquentielle dans un tableau trié (optimisation)
 * 
 * @param tableau Le tableau trié dans lequel effectuer la recherche
 * @param taille La taille du tableau
 * @param valeur La valeur à rechercher
 * @return int L'indice de la valeur, ou -1 si non trouvée
 */
int recherche_sequentielle_triee(const int *tableau, int taille, int valeur);

/**
 * @brief Recherche séquentielle avec sentinelle (optimisation)
 * 
 * @param tableau Tableau dans lequel effectuer la recherche (sera modifié temporairement)
 * @param taille La taille du tableau
 * @param valeur La valeur à rechercher
 * @return int L'indice de la valeur, ou -1 si non trouvée
 */
int recherche_avec_sentinelle(int *tableau, int taille, int valeur);

#endif // RECHERCHE_H
