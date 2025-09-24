RAPPORT INDIVIDUEL DU TP D’INF231

	Ce TP portait sur un ensemble d’exercice concernant les structures de données. Il était question pour moi de traiter les questions 1 et 9 du devoir qui étaient respectivement de faire un programme pouvant effectuer la somme de deux matrices et le produit entre une matrice et un vecteur. Ce rapport se divisera donc en deux parties :

I.	SOMMES DE DEUX MATRICES

1.	 Représentation des matrices
•	J’ai utilisé des tableaux dynamiques en 2D (via malloc) pour représenter les matrices.
•	Chaque matrice est donc un tableau de pointeurs vers des lignes, ce qui rend le programme plus flexible (taille choisie à l’exécution, pas fixée au code).
2.	Choix des dimensions
•	Une fonction demanderDimensions vérifie que les dimensions saisies sont valides (entre 1 et MAX_DIM).
•	On impose que les deux matrices aient les mêmes dimensions pour pouvoir les additionner.
3.	Saisie des données
•	La fonction saisirMatrice demande à l’utilisateur de remplir chaque élément des matrices.
•	Cela permet d’avoir un programme interactif et adaptable.
4.	Calcul de la somme
•	La fonction additionMatrices applique directement la formule mathématique :

C[i][j]=A[i][j]+B[i][j]C[i][j] = A[i][j] + B[i][j]C[i][j]=A[i][j]+B[i][j] 

Pour chaque position (i, j).

•	Ce parcours se fait par deux boucles imbriquées (lignes et colonnes).

5.	Affichage du résultat

•	La fonction afficherMatrice parcourt et affiche la matrice résultat de façon structurée.

6.	Gestion mémoire

•	Allocation dynamique (malloc) pour créer les matrices selon la taille choisie par 
l’utilisateur.

•	Libération de la mémoire (free) à la fin pour éviter les fuites mémoire.

II.	PRODUIT D’UNE MATRICE ET D’UN VECTEUR

Pour calculer le produit d’une matrice A par un vecteur x, j’ai utilisé la formule mathématique classique :

Yi = ∑(j=1)Aij.xj

Où A est une matrice de dimension n×m, x est un vecteur de dimension n, et le résultat Y est un vecteur de dimension m. Concrètement, chaque composante Yi du résultat correspond au produit scalaire de la ligne iii de la matrice avec le vecteur.
________________________________________

Méthode de calcul en C

•	Types de données utilisés :
J’ai utilisé le type int pour représenter les éléments de la matrice et du vecteur, car ce sont des nombres entiers dans notre exemple. Si on devait travailler avec des réels (par exemple en calcul scientifique), on pourrait utiliser float ou double.

•	Parcours de la matrice :

J’ai utilisé deux boucles for :

o	une boucle externe pour parcourir les lignes de la matrice,
o	une boucle interne pour faire la somme des produits Aij×xj .

•	Stockage du résultat :

Le vecteur résultat est passé en paramètre à la fonction et rempli directement dans la boucle.