# Rapport de Projet - Structures de Données

**Auteur** : Preslie Chanel MATAGNE DASSE  
**Groupe** : L2-INF231  
**Date de début** : 22/09/2024  
**Dernière mise à jour** : 24/09/2024

## Table des matières
1. [Introduction](#introduction)
2. [Exercice 5 : Vérification de tri](#exercice-5-vérification-de-tri)
3. [Exercice 6 : Calcul de la médiane](#exercice-6-calcul-de-la-médiane)
4. [Tests et validation](#tests-et-validation)
5. [Difficultés rencontrées](#difficultés-rencontrées)
6. [Conclusion](#conclusion)

## Introduction
Ce document présente mon travail sur les exercices 5 et 6 du projet de structures de données. L'objectif était d'implémenter des fonctions pour vérifier si un tableau est trié et pour calculer la médiane d'un tableau d'entiers.

## Exercice 5 : Vérification de tri

### Objectif
Implémenter des fonctions pour vérifier si un tableau est trié par ordre croissant, décroissant, ou non trié.

### Implémentation
J'ai créé trois fonctions principales :
1. `est_trie_croissant` : Vérifie si un tableau est trié par ordre croissant
2. `est_trie_decroissant` : Vérifie si un tableau est trié par ordre décroissant
3. `est_trie` : Vérifie si un tableau est trié (dans un sens ou dans l'autre)

### Détails techniques
- Les fonctions gèrent les cas particuliers (tableau vide, tableau à un élément)
- Complexité temporelle : O(n) dans le pire des cas
- Complexité spatiale : O(1)

## Exercice 6 : Calcul de la médiane

### Objectif
Implémenter une fonction pour trouver la valeur médiane d'un tableau d'entiers.

### Implémentation
J'ai implémenté les fonctions suivantes :
1. `trouver_mediane` : Calcule la médiane d'un tableau
2. `tri_rapide` : Implémente l'algorithme de tri rapide (quicksort) pour trier le tableau
3. Fonctions auxiliaires : `echanger` et `partitionner` pour le tri rapide

### Détails techniques
- Utilisation du tri rapide pour trier le tableau avant de trouver la médiane
- Gestion des tableaux avec un nombre pair ou impair d'éléments
- Complexité temporelle : O(n log n) dans le cas moyen (dû au tri rapide)
- Complexité spatiale : O(n) à cause de la copie du tableau

## Tests et validation

### Tests unitaires
J'ai créé des fichiers de test séparés pour chaque fonctionnalité :
- `test_verification_tri.c` : Tests pour les fonctions de vérification de tri
- `test_median.c` : Tests pour les fonctions de calcul de médiane

### Cas de test
Les tests couvrent les cas suivants :
- Tableau vide
- Tableau à un élément
- Tableau trié croissant
- Tableau trié décroissant
- Tableau non trié
- Tableau avec des doublons
- Tableau avec des valeurs négatives

### Exécution des tests
Pour compiler et exécuter les tests :

```bash
# Compiler les tests de vérification de tri
gcc -o test_verification_tri tests/test_verification_tri.c src/tableaux/verification_tri.c -I src/tableaux/
./test_verification_tri

# Compiler les tests de médiane
gcc -o test_median tests/test_median.c src/tableaux/median.c src/tableaux/verification_tri.c -I src/tableaux/
./test_median

# Compiler et exécuter le programme principal
gcc -o main src/main.c src/tableaux/verification_tri.c src/tableaux/median.c -I src/tableaux/
./main
```

## Difficultés rencontrées

1. **Gestion des tableaux vides ou à un seul élément** :
   - Problème : Les fonctions devaient gérer correctement ces cas particuliers
   - Solution : Ajout de vérifications au début des fonctions pour retourner des valeurs cohérentes

2. **Précision des nombres flottants** :
   - Problème : La comparaison des nombres flottants peut être imprécise
   - Solution : Implémentation d'une fonction `egal_avec_epsilon` pour comparer les nombres flottants avec une certaine tolérance

3. **Optimisation du tri** :
   - Problème : Le tri rapide peut avoir une complexité quadratique dans le pire cas
   - Solution : Utilisation d'un pivot aléatoire pourrait améliorer les performances dans certains cas

## Conclusion

Ce projet m'a permis de renforcer mes compétences en programmation C et en algorithmique. J'ai notamment appris à :
- Implémenter des algorithmes de tri efficaces
- Gérer les cas particuliers et les erreurs
- Écrire des tests unitaires complets
- Documenter correctement le code

Les fonctions implémentées sont maintenant opérationnelles et couvrent tous les cas d'utilisation demandés. Les tests unitaires permettent de s'assurer de leur bon fonctionnement dans différentes situations.

## Améliorations possibles

1. Implémenter un tri plus efficace pour le calcul de la médiane (comme l'algorithme de sélection rapide)
2. Ajouter la gestion des erreurs de manière plus robuste
3. Optimiser l'utilisation de la mémoire pour les grands tableaux
4. Ajouter des tests de performance pour comparer différentes implémentations
