#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, facteur;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);


    int original[n];
    int resultat[n];


    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &original[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    for (int i = 0; i < n; i++) {
        resultat[i] = original[i] * facteur;
    }

    printf("Tableau résultant après multiplication par %d :\n", facteur);
    for (int i = 0; i < n; i++) {
        printf("%d ", resultat[i]);
    }

    printf("\n");

    return 0;
}
