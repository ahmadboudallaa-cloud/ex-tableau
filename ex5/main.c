#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;


    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    int min = tableau[0];

    for (int i = 1; i < n; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }

    printf("L'élément le plus petit du tableau est : %d\n", min);

    return 0;
}
