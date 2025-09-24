/**
 * @file produit_vectoriel.h
 * @author Votre Nom
 * @brief Fonctions pour le calcul du produit vectoriel
 * @version 0.1
 * @date 2024-03-01
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef PRODUIT_VECTORIEL_H
#define PRODUIT_VECTORIEL_H

/**
 * @brief Calcule le produit vectoriel de deux vecteurs 3D
 * 
 * @param vecteur1 Premier vecteur (tableau de 3 éléments)
 * @param vecteur2 Deuxième vecteur (tableau de 3 éléments)
 * @param resultat Tableau de 3 éléments qui contiendra le résultat (doit être alloué par l'appelant)
 */
void produit_vectoriel(const double *vecteur1, const double *vecteur2, double *resultat);

/**
 * @brief Affiche un vecteur 3D
 * 
 * @param vecteur Le vecteur à afficher (tableau de 3 éléments)
 */
void afficher_vecteur(const double *vecteur);

#endif // PRODUIT_VECTORIEL_H
