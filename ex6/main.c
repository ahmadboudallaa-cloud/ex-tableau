#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, facteur;

    printf("Entrez le nombre d'�l�ments du tableau : ");
    scanf("%d", &n);


    int original[n];
    int resultat[n];


    printf("Entrez les %d �l�ments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d : ", i + 1);
        scanf("%d", &original[i]);
    }

    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    for (int i = 0; i < n; i++) {
        resultat[i] = original[i] * facteur;
    }

    printf("Tableau r�sultant apr�s multiplication par %d :\n", facteur);
    for (int i = 0; i < n; i++) {
        printf("%d ", resultat[i]);
    }

    printf("\n");

    return 0;
}
