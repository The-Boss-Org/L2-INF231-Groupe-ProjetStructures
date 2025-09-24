# Projet Structures de Données II - Algorithmes Fondamentaux

**📅 Date de rendu :** Jeudi 25 Septembre 2025  
**👨‍🏫 Enseignant :** PR Metatagia  
**📚 Cours :** INF231 EC2 - Structures de Données II  
**👥 Groupe :** Boss

## 🎯 Présentation du Projet

Ce projet implémente en **langage C** une série d'algorithmes fondamentaux couvrant les opérations matricielles, la manipulation de tableaux et les algorithmes de recherche. Développé dans le cadre du cours de Structures de Données II, il sert de démonstration pratique des concepts théoriques vus en cours.

## 👥 Équipe de Développement

| Rôle | Membre | Matricule | Tâches principales |
|------|--------|-----------|-------------------|
| **Chef de projet** | MATAGNE DASSE Preslie Chanel | 23V2294 | Coordination, intégration | Exercices 5 & 6 |
| **Développeur** | [Ton Prénom Nom] | [Ton Matricule] | Exercices 1 & 2 |
| **Développeur** | [Prénom Nom] | [Matricule] | Exercices 3 & 4 |
| **Développeur** | [Prénom Nom] | [Matricule] | Exercices 7 & 8 |
| **Développeur** | [Prénom Nom] | [Matricule] | Exercice 9 |
| **Intégrateur** | [Prénom Nom] | [Matricule] | Assemblage| Main program, tests |

## 📋 Fonctionnalités Implémentées

### 🔢 Opérations Matricielles
- **Exercice 1 :** Somme de matrices
- **Exercice 2 :** Produit de matrices
- **Exercice 9 :** Produit vecteur × matrices

### 🔍 Algorithmes de Recherche & Analyse
- **Exercice 3 :** Recherche séquentielle dans un tableau
- **Exercice 5 :** Tester si un tableau est trié ✅
- **Exercice 6 :** Calcul du médian dans un tableau ✅

### 📊 Manipulations de Tableaux
- **Exercice 4 :** Multiplication a × b pour a,b > 0
- **Exercice 7 :** Inverser un tableau
- **Exercice 8 :** Produit vectoriel

## 🗂️ Structure du Projet
L2-INF231-Groupe-ProjetStructures/
├── 📄 README.md # Ce fichier
├── 📁 docs/ # Documentation
│ ├── 📁 rapports/ # Rapports formels
│ ├── 📄 [Matricule]PrenomNOM.md # Cahiers de suivi individuels
│ └── 📄 guide_utilisation.md # Guide utilisateur
├── 📁 src/ # Code source
│ ├── 📁 matrices/ # Opérations sur matrices
│ ├── 📁 tableaux/ # Algorithmes sur tableaux ✅
│ └── 📄 main.c # Programme principal
├── 📁 tests/ # Tests unitaires
│ ├── 📄 test_general.c # Tests complets
│ ├── 📄 test_matrices.c # Tests matrices
│ └── 📄 test_tableaux.c # Tests tableaux ✅
└── 📁 presentations/ # Supports de présentation


## ⚡ Installation et Utilisation

### Prérequis
- Compilateur C (GCC recommandé)
- Git pour la gestion de version

### Compilation
# Cloner le repository
git clone https://github.com/The-Boss-Org/L2-INF231-Groupe-ProjetStructures.git
cd L2-INF231-Groupe-ProjetStructures

# Compiler le projet
gcc -o projet src/main.c src/matrices/*.c src/tableaux/*.c

# Exécuter
./projet

## Utilisation
Le programme propose un menu interactif permettant d'accéder à toutes les fonctionnalités :

=== PROJET SDD2 - ALGORITHMES FONDAMENTAUX ===
1. Somme de matrices
2. Produit de matrices
3. Recherche séquentielle
4. Multiplication a × b
5. Vérifier si tableau trié ✅
6. Calculer le médian ✅
7. Inverser un tableau
8. Produit vectoriel
9. Produit vecteur × matrices
0. Quitter

## 🧪 Tests et Validation
Chaque algorithme est validé par des tests unitaires :

# Exécuter tous les tests
gcc -o tests tests/test_general.c src/matrices/*.c src/tableaux/*.c
./tests

# Tests spécifiques tableaux
gcc -o test_tableaux tests/test_tableaux.c src/tableaux/*.c
./test_tableaux

# 📊 Avancement du Projet

| Module | Statut | Responsable | Dernière mise à jour |
|--------|--------|-------------|---------------------|
| **Exercices 5-6** | ✅ Terminé | Preslie Chanel | 23/09/2025 |
| **Exercices 1-2** | 🔄 En cours | Emrys | [Date] |
| **Exercices 3-4** | 🔄 En cours |Caleb | [Date] |
| **Exercices 7-8** | ⏳ En attente | Yvo | [Date] |
| **Exercice 9** | ⏳ En attente | Hendrix | [Date] |
| **Intégration** | ⏳ En attente | Ronel | [Date] |

# 🔧 Développement

## Contribution
Chaque membre doit :
- Mettre à jour son cahier de suivi dans `docs/`
- Respecter les conventions de code
- Tester ses fonctions avant intégration
- Participer aux réunions d'avancement
- Signaler rapidement les difficultés rencontrées

## Conventions de Code
- Nommage explicite des fonctions
- Commentaires en anglais/français
- Gestion robuste des erreurs
- Validation des paramètres d'entrée

## 📝 Cahiers de Suivi
Les rapports individuels sont disponibles dans le dossier docs/ :

 **docs/[TonMatricule]TonPrenomNOM.md** - Ton suivi détaillé

**Contenu** : dates, travaux réalisés, difficultés, solutions


## 📞 Support
Pour toute question concernant :
**Intégration générale** : Contacter Preslie Chanel

Problèmes techniques : Ouvrir une issue GitHub

📄 Licence
Projet académique - Université de Yaoundé I - Année 2025

⭐ N'oubliez pas de mettre à jour vos cahiers de suivi régulièrement !


## 🗂️ Structure du Projet
