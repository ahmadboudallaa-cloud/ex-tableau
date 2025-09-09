#include <stdio.h>
#include <stdlib.h>

void trier_tableau(int tab[], int n)
{    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {

                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}
void afficher_tableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab[] = {5, 2, 9, 1, 7, 4};
    int taille = sizeof(tab) / sizeof(tab[0]);

    printf("Tableau avant tri : ");
    afficher_tableau(tab, taille);

    trier_tableau(tab, taille);

    printf("Tableau après tri croissant : ");
    afficher_tableau(tab, taille);

    return 0;
}
