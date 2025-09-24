# Rapport des exercices 7 et 8

**Auteur** : VAMI NEGUEM Yvo Freed
**Groupe** : L2-INF231  
**Date** : 24/09/2024

## Table des matières
1. [Exercice 7 - Inversion de tableau](#exercice-7---inversion-de-tableau)
2. [Exercice 8 - Produit vectoriel](#exercice-8---produit-vectoriel)
3. [Tests et validation](#tests-et-validation)
4. [Difficultés rencontrées](#difficultés-rencontrées)
5. [Conclusion](#conclusion)

## Exercice 7 - Inversion de tableau

### Objectif
Implémenter des fonctions pour inverser l'ordre des éléments d'un tableau d'entiers.

### Implémentation
J'ai créé deux fonctions principales :
1. `inverser_tableau` : Inverse les éléments d'un tableau sur place
2. `creer_tableau_inverse` : Crée une nouvelle copie inversée du tableau

### Détails techniques
- **Complexité temporelle** : O(n) pour les deux fonctions
- **Complexité spatiale** :
  - `inverser_tableau` : O(1) (en place)
  - `creer_tableau_inverse` : O(n) (allocation d'un nouveau tableau)
- Gestion des cas particuliers : tableaux vides, NULL, ou à un seul élément

## Exercice 8 - Produit vectoriel

### Objectif
Implémenter une fonction pour calculer le produit vectoriel de deux vecteurs 3D.

### Implémentation
J'ai implémenté :
1. `produit_vectoriel` : Calcule le produit vectoriel de deux vecteurs 3D
2. `afficher_vecteur` : Affiche un vecteur 3D de manière lisible

### Détails techniques
- Le produit vectoriel est défini uniquement pour les vecteurs en 3D
- La fonction vérifie les pointeurs NULL
- Utilisation de nombres à virgule flottante (double) pour la précision

## Tests et validation

### Tests pour l'inversion de tableau
- Inversion d'un tableau pair d'éléments
- Inversion d'un tableau impair d'éléments
- Gestion des tableaux vides ou NULL
- Vérification de la non-modification du tableau original avec `creer_tableau_inverse`

### Tests pour le produit vectoriel
- Produit des vecteurs de base (i × j = k)
- Produit de vecteurs quelconques
- Cas particulier des vecteurs colinéaires (produit vectoriel nul)
- Vérification de l'orthogonalité du résultat par rapport aux vecteurs d'entrée

## Difficultés rencontrées

1. **Gestion de la mémoire** :
   - Pour `creer_tableau_inverse`, il était important de bien documenter que la mémoire allouée doit être libérée par l'appelant.
   - Solution : Ajout de commentaires clairs dans la documentation de la fonction.

2. **Précision des calculs** :
   - Pour le produit vectoriel, les erreurs d'arrondi peuvent poser problème lors des comparaisons.
   - Solution : Utilisation d'une fonction de comparaison avec une tolérance (epsilon).

3. **Cas particuliers** :
   - Gestion des pointeurs NULL et des tableaux vides.
   - Solution : Vérifications systématiques au début des fonctions.

## Conclusion

Ces exercices m'ont permis de renforcer mes compétences en manipulation de tableaux et en algèbre linéaire de base. J'ai particulièrement apprécié l'aspect mathématique du produit vectoriel et sa traduction en code.

Les principaux points clés retenus sont :
- L'importance de la gestion de la mémoire en C
- La nécessité de tests exhaustifs pour couvrir tous les cas particuliers
- L'utilité des commentaires pour documenter le comportement des fonctions

## Compilation et exécution

Pour compiler et exécuter les tests :

```bash
# Compiler les tests d'inversion
gcc -o tests/test_inversion tests/test_inversion.c src/tableaux/inversion.c -I src/tableaux/

# Exécuter les tests d'inversion
./tests/test_inversion

# Compiler les tests de produit vectoriel
gcc -o tests/test_produit_vectoriel tests/test_produit_vectoriel.c src/matrices/produit_vectoriel.c -I src/matrices/ -lm

# Exécuter les tests de produit vectoriel
./tests/test_produit_vectoriel
```
