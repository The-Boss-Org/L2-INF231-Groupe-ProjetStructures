#include <stdio.h>

// Fonction de recherche séquentielle
int recherche_sequentielle(int tableau[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            return i; // L'élément est trouvé, on retourne son indice
        }
    }
    return -1; // L'élément n'est pas trouvé
}

int main() {
    int tableau[] = {10, 25, 30, 45, 50};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int valeur_recherchee;

    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &valeur_recherchee);

    int resultat = recherche_sequentielle(tableau, taille, valeur_recherchee);

    if (resultat != -1) {
        printf("Valeur trouvée à l'indice %d.\n", resultat);
    } else {
        printf("Valeur non trouvée dans le tableau.\n");
    }

    return 0;
