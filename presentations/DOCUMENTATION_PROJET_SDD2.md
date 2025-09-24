###############################################################################
#                          PROJET STRUCTURES DE DONNÉES II                    #
#                     Algorithmes Fondamentaux en Langage C                   #
###############################################################################

📅 DATE DE RENDU: Mercredi 24 septembre 2025
👨‍🏫 ENSEIGNANT: Pr Melatagia Paulin
📚 COURS: INF231 EC2 - Structures de Données II
👥 GROUPE: Groupe 1


#                               TABLE DES MATIÈRES                           #


1. PRÉSENTATION GÉNÉRALE
2. ÉQUIPE DE DÉVELOPPEMENT
3. STRUCTURE DU PROJET
4. PRÉSENTATION DES 9 EXERCICES
5. INSTALLATION ET UTILISATION
6. TESTS ET VALIDATION
7. AVANCEMENT DU PROJET
8. CONVENTIONS DE DÉVELOPPEMENT
9. CAHIERS DE SUIVI
10. SUPPORT ET CONTACTS


#                        1. PRÉSENTATION GÉNÉRALE                            #


Ce projet implémente en langage C une série d'algorithmes fondamentaux couvrant:

• Les opérations matricielles (somme, produit)
• Les algorithmes de recherche et d'analyse
• Les manipulations de tableaux
• Les produits vectoriels

Développé dans le cadre du cours de Structures de Données II, ce projet sert de
démonstration pratique des concepts théoriques vus en cours.


#                      2. ÉQUIPE DE DÉVELOPPEMENT                            #


| Rôle              | Membre          | Matricule | Tâches principales                |
|-------------------|----------------|-----------|-----------------------------------|
| **Chef de projet** | Preslie Chanel | 23V2294   | Coordination, intégration          |
| **Développeur**    | Preslie Chanel | 23V2294   | Exercices 5, 6                   |
| **Développeur**    | Caleb Israel   | 24G2771   | Exercices 3 & 4                    |
| **Développeur**    | Yvo Freed      | 24F2658   | Exercices 5 & 6                    |
| **Développeur**    | Hendrix Legrand| 24G2579   | Exercices 1, 2 & 9                   |
| **Intégrateur**    | Steddy Ronel   | 24G2255   | Programme principal, tests         |


#                    3. STRUCTURE DU PROJET                         #


L2-INF231-Groupe-ProjetStructures/
├── 📄 README.md # Documentation principale
├── 📁 docs/ # Documentation
│ ├── 📁 rapports/ # Rapports formels
│ ├── 📄 [Matricule]PrenomNOM.md# Cahiers de suivi individuels
│ └── 📄 guide_utilisation.md # Guide utilisateur
├── 📁 src/ # Code source
│ ├── 📁 matrices/ # Opérations sur matrices (Exo 1,2,9)
│ ├── 📁 tableaux/ # Algorithmes sur tableaux (Exo 3-8)
│ └── 📄 main.c # Programme principal
├── 📁 tests/ # Tests unitaires
│ ├── 📄 test_general.c # Tests complets
│ ├── 📄 test_exercices_1_2_9.c # Tests matrices
│ └── 📄 test_tableaux.c # Tests tableaux
└── 📁 presentations/ # Présentations
├── 📄 soutenance.pptx # Support de soutenance
└── 📄 notes_oral.md # Notes d’oral


#                    4. PRÉSENTATION DES 9 EXERCICES                         #


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 1: SOMME DE MATRICES ✅
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Additionner deux matrices de mêmes dimensions
• ENTREE: Deux matrices A et B (3 × 3)
• SORTIE: Matrice C où C[i][j] = A[i][j] + B[i][j]
• COMPLEXITÉ: O(n²) avec n=3
• FONCTION: void somme_matrices(double m1[3][3], double m2[3][3], double resultat[3][3])
• STATUT: ✅ COMPLÈTEMENT IMPLÉMENTÉ

Exemple:
A = [1 2 3]    B = [9 8 7]    C = [10 10 10]
    [4 5 6]        [6 5 4]        [10 10 10]
    [7 8 9]        [3 2 1]        [10 10 10]



───────────────────────────────────────────────────────────────────────────────
## EXERCICE 2: PRODUIT DE MATRICES ✅
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Calculer le produit matriciel de deux matrices compatibles
• ENTREE: Matrice A (3 × 3) et matrice B (3 × 3)
• SORTIE: Matrice C (3 × 3) où C[i][j] = Σ A[i][k] × B[k][j]
• COMPLEXITÉ: O(n³) avec n=3
• FONCTION: void produit_matrices(double m1[3][3], double m2[3][3], double resultat[3][3])
• STATUT: ✅ COMPLÈTEMENT IMPLÉMENTÉ

Exemple:
A = [1 2 3]    B = [9 8 7]    C = [30 24 18]
    [4 5 6]        [6 5 4]        [84 69 54]
    [7 8 9]        [3 2 1]        [138 114 90]


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 3: RECHERCHE SÉQUENTIELLE
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Trouver la première occurrence d'un élément dans un tableau
• ENTREE: Tableau d'entiers, taille, valeur recherchée
• SORTIE: Index de la première occurrence ou -1 si non trouvé
• COMPLEXITÉ: O(n)
• FONCTION: int recherche_sequentielle(int tableau[], int taille, int valeur)
• STATUT: 🔄 À IMPLÉMENTER

Exemple:
Tableau: [4, 2, 7, 1, 9]
Recherche: 7 → Index 2
Recherche: 5 → -1


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 4: MULTIPLICATION a × b
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Calculer le produit de deux nombres entiers positifs
• ENTREE: Deux entiers a > 0, b > 0
• SORTIE: Produit a × b
• ALGORITHME: Multiplication itérative
• FONCTION: int multiplication(int a, int b)
• STATUT: 🔄 À IMPLÉMENTER

Exemple:
a = 5, b = 3 → 15
a = 7, b = 4 → 28


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 5: VÉRIFICATION DE TRI ✅
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Vérifier si un tableau est trié par ordre croissant
• ENTREE: Tableau d'entiers et sa taille
• SORTIE: 1 si trié, 0 sinon
• COMPLEXITÉ: O(n) avec optimisation d'arrêt anticipé
• FONCTION: int est_tableau_trie(int tableau[], int taille)
• STATUT: ✅ COMPLÈTEMENT IMPLÉMENTÉ

Exemple:
[1, 3, 5, 7] → 1 (trié)
[1, 7, 3, 5] → 0 (non trié)


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 6: CALCUL DU MÉDIAN ✅
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Trouver la valeur médiane d'un tableau numérique
• ENTREE: Tableau d'entiers et sa taille
• SORTIE: Valeur médiane (float pour précision)
• ALGORITHME: Tri + sélection du milieu
• FONCTION: float trouver_median(int tableau[], int taille)
• STATUT: ✅ COMPLÈTEMENT IMPLÉMENTÉ

Exemple:
[1, 3, 5] → 3.0
[1, 2, 3, 4] → 2.5


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 7: INVERSION DE TABLEAU
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Inverser l'ordre des éléments d'un tableau
• ENTREE: Tableau d'entiers et sa taille
• SORTIE: Tableau inversé (modification en place)
• COMPLEXITÉ: O(n/2)
• FONCTION: void inverser_tableau(int tableau[], int taille)
• STATUT: 🔄 À IMPLÉMENTER

Exemple:
[1, 2, 3, 4] → [4, 3, 2, 1]
[5, 8, 2] → [2, 8, 5]


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 8: PRODUIT VECTORIEL
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Calculer le produit vectoriel de deux vecteurs 3D
• ENTREE: Deux vecteurs 3D (tableaux de 3 éléments)
• SORTIE: Vecteur résultat du produit vectoriel
• FORMULE: x = ay*bz - az*by, y = az*bx - ax*bz, z = ax*by - ay*bx
• FONCTION: void produit_vectoriel(double resultat[3], double A[3], double B[3])
• STATUT: 🔄 À IMPLÉMENTER

Exemple:
A = [1, 2, 3], B = [4, 5, 6]
Produit = [2*6-3*5, 3*4-1*6, 1*5-2*4] = [-3, 6, -3]


───────────────────────────────────────────────────────────────────────────────
## EXERCICE 9: PRODUIT VECTEUR × MATRICES ✅
───────────────────────────────────────────────────────────────────────────────
• OBJECTIF: Multiplier un vecteur ligne par une matrice
• ENTREE: Vecteur ligne (1 × 3), Matrice (3 × 3)
• SORTIE: Vecteur résultat (1 × 3)
• FORMULE: Résultat[i] = Σ vecteur[j] × matrice[j][i]
• FONCTION: void produit_vecteur_matrice(double vecteur[3], double matrice[3][3], double resultat[3])
• STATUT: ✅ COMPLÈTEMENT IMPLÉMENTÉ

Exemple:
Vecteur = [1, 2, 3]
Matrice = [1 2 3]
          [4 5 6]
          [7 8 9]
Résultat = [30, 36, 42]


#                      5. INSTALLATION ET UTILISATION                        #


PRÉREQUIS:
• Compilateur C (GCC recommandé)
• Git pour la gestion de version
• Système d'exploitation: Windows/Linux/macOS

COMPILATION:
```bash
# Cloner le repository
git clone https://github.com/The-Boss-Org/L2-INF231-Groupe-ProjetStructures.git
cd L2-INF231-Groupe-ProjetStructures

# Compiler le projet
gcc -o bin/main src/main.c src/tableaux/*.c src/matrices/*.c -I src/tableaux -I src/matrices -lm

# Exécuter
./bin/main
```


#                        6. TESTS ET VALIDATION                              #


───────────────────────────────────────────────────────────────────────────────
TESTS EXERCICE 1 - SOMME DE MATRICES
───────────────────────────────────────────────────────────────────────────────
✅ Test 1: Matrices normales [OK]
✅ Test 2: Matrice identité [OK]
✅ Test 3: Matrice nulle [OK]
✅ Test 4: Matrices négatives [OK]

───────────────────────────────────────────────────────────────────────────────
TESTS EXERCICE 2 - PRODUIT DE MATRICES
───────────────────────────────────────────────────────────────────────────────
✅ Test 1: Matrices normales [OK]
✅ Test 2: Matrice identité [OK]
✅ Test 3: Matrice nulle [OK]

───────────────────────────────────────────────────────────────────────────────
TESTS EXERCICE 9 - PRODUIT VECTEUR × MATRICE
───────────────────────────────────────────────────────────────────────────────
✅ Test 1: Vecteur et matrice définis [OK]
✅ Test 2: Vecteur unitaire [OK]
✅ Test 3: Matrice identité [OK]

RÉSULTATS GLOBAUX: 10/10 tests réussis ✅


#                       7. AVANCEMENT DU PROJET                              #


📊 ÉTAT D'AVANCEMENT PAR EXERCICE:

✅ EXERCICE 1: SOMME DE MATRICES          - 100% terminé
✅ EXERCICE 2: PRODUIT DE MATRICES        - 100% terminé
✅ EXERCICE 5: VÉRIFICATION DE TRI        - 100% terminé
✅ EXERCICE 6: CALCUL DU MÉDIAN           - 100% terminé
✅ EXERCICE 9: PRODUIT VECTEUR × MATRICE  - 100% terminé

🔄 EXERCICE 3: RECHERCHE SÉQUENTIELLE    - 80% terminé
🔄 EXERCICE 4: MULTIPLICATION             - 80% terminé
🔄 EXERCICE 7: INVERSION DE TABLEAU       - 80% terminé
🔄 EXERCICE 8: PRODUIT VECTORIEL          - 80% terminé

📈 AVANCEMENT GLOBAL: 85% terminé


#                    8. CONVENTIONS DE DÉVELOPPEMENT                         #


• CODAGE: UTF-8
• INDENTATION: 4 espaces (pas de tabulations)
• NOMS DE VARIABLES: snake_case
• NOMS DE FONCTIONS: snake_case
• CONSTANTES: MAJUSCULES avec underscore
• COMMENTAIRES: Français, format Doxygen
• LONGUEUR MAX LIGNE: 80 caractères
• FICHIERS: Un fichier par fonction/fonctionnalité


#                          9. CAHIERS DE SUIVI                               #


Chaque membre de l'équipe tient un cahier de suivi individuel dans le dossier
docs/ avec son matricule et nom. Ces cahiers détaillent:

• Tâches accomplies quotidiennement
• Difficultés rencontrées et solutions
• Temps passé sur chaque exercice
• Contributions au projet global
• Réflexions sur les concepts appris


#                       10. SUPPORT ET CONTACTS                              #


📧 COORDONNÉES DE L'ÉQUIPE:
• Chef de projet: chanelledasse1@gmail.com

🔗 RESSOURCES:
• Repository GitHub: https://github.com/The-Boss-Org/L2-INF231-Groupe-ProjetStructures
• Documentation: https://github.com/The-Boss-Org/L2-INF231-Groupe-ProjetStructures/tree/main/docs
• Issues: https://github.com/The-Boss-Org/L2-INF231-Groupe-ProjetStructures/issues

📱 SUPPORT:
• WhatsApp: Groupe de travail SDD2
• Email: chanelledasse1@gmail.com


#                          FIN DU DOCUMENT                                   #
###############################################################################
