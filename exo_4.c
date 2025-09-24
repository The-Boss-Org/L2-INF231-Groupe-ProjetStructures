#include <stdio.h>

// Fonction qui calcule a × b pour a, b > 0
int produit(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;  // on ajoute a, b fois
    }
    return result;
}

int main() {
    int a = 5, b = 7;
    printf("%d × %d = %d\n", a, b, produit(a, b));
    return 0;
}
