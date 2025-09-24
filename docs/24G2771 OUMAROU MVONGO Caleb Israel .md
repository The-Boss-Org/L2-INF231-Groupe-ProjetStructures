# Rapport des exercices 3 et 4

**Auteur** : OUMAROU MVONGO Caleb Israel
**Groupe** : L2-INF231  
**Date** : 24/09/2024

## Table des matières
1. [Exercice 3 - Recherche séquentielle](#exercice-3---recherche-séquentielle)
2. [Exercice 4 - Multiplication a × b pour a, b > 0](#exercice-4---multiplication-a--b-pour-a-b--0)
3. [Tests et validation](#tests-et-validation)
4. [Difficultés rencontrées](#difficultés-rencontrées)
5. [Conclusion](#conclusion)

## Exercice 3 - Recherche séquentielle

### Objectif
Implémenter des algorithmes de recherche séquentielle dans un tableau d'entiers.

### Implémentation
J'ai implémenté trois variantes de l'algorithme de recherche séquentielle :

1. **Recherche séquentielle classique** :
   - Parcourt le tableau élément par élément jusqu'à trouver la valeur cible
   - Complexité : O(n) dans le pire cas

2. **Recherche séquentielle optimisée pour les tableaux triés** :
   - S'arrête dès que l'élément courant dépasse la valeur recherchée (pour les tableaux triés par ordre croissant)
   - Complexité : O(n) dans le pire cas, mais peut être plus rapide en pratique

3. **Recherche avec sentinelle** :
   - Utilise une sentinelle pour éliminer une comparaison dans la boucle
   - Complexité : O(n) mais avec une constante plus petite

### Détails techniques
- Gestion des cas particuliers : tableaux vides, valeurs non trouvées
- Retourne l'indice de la première occurrence de la valeur
- Retourne -1 si la valeur n'est pas trouvée

## Exercice 4 - Multiplication a × b pour a, b > 0

### Objectif
Implémenter différentes méthodes pour multiplier deux entiers positifs en utilisant uniquement des additions et des décalages.

### Implémentation
J'ai implémenté trois méthodes de multiplication :

1. **Méthode par additions successives** :
   - Ajoute 'a' à lui-même 'b' fois
   - Complexité : O(b)

2. **Méthode égyptienne (ou russe)** :
   - Basée sur le décalage de bits et l'addition conditionnelle
   - Complexité : O(log b)
   - Plus efficace pour les grands nombres

3. **Méthode récursive** :
   - Utilise la récursivité pour effectuer les additions
   - Complexité : O(b)
   - Moins efficace à cause de la pile d'appels récursifs

### Détails techniques
- Vérification des entrées négatives (retourne -1)
- Gestion du cas particulier où l'un des nombres est zéro
- Optimisation pour minimiser le nombre d'opérations

## Tests et validation

### Tests pour la recherche séquentielle
- Recherche d'une valeur présente dans le tableau
- Recherche d'une valeur absente
- Recherche dans un tableau vide
- Recherche avec des doublons
- Vérification de la stabilité (première occurrence)

### Tests pour la multiplication
- Multiplication de nombres positifs
- Multiplication par zéro
- Multiplication par un
- Vérification des cas limites
- Comparaison des résultats entre les différentes méthodes

## Difficultés rencontrées

1. **Optimisation de la recherche séquentielle** :
   - La recherche avec sentinelle nécessite de modifier temporairement le tableau
   - Solution : Sauvegarder et restaurer la valeur originale

2. **Gestion des grands nombres** :
   - Risque de débordement avec la méthode des additions successives
   - Solution : Ajouter une vérification des débordements (non implémentée ici pour la clarté)

3. **Efficacité des algorithmes** :
   - La méthode récursive peut entraîner un débordement de pile pour de grandes valeurs
   - Solution : Utiliser une méthode itérative pour les grands nombres

## Conclusion

Ces exercices m'ont permis de :
- Comprendre les différentes approches pour résoudre un même problème
- Apprécier l'importance du choix de l'algorithme en fonction des contraintes
- Mieux gérer les cas particuliers et les erreurs potentielles

Les méthodes implémentées offrent un bon compromis entre simplicité et efficacité, avec des cas d'utilisation adaptés à différentes situations.

## Compilation et exécution

Pour compiler et exécuter les tests :

```bash
# Compiler et exécuter les tests de recherche
gcc -o tests/test_recherche tests/test_recherche.c src/tableaux/recherche.c -I src/tableaux/
./tests/test_recherche

# Compiler et exécuter les tests de multiplication
gcc -o tests/test_multiplication tests/test_multiplication.c src/tableaux/multiplication.c -I src/tableaux/
./tests/test_multiplication
```
