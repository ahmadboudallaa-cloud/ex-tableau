#include <stdio.h>
#include <stdlib.h>


int main() {
    int taille;


    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &taille);


    if (taille <= 0) {
        printf("La taille doit être supérieure à 0.\n");
        return 1;
    }


    int* tableau = (int*) malloc(taille * sizeof(int));
    if (tableau == NULL) {
        printf("Échec de l'allocation de mémoire.\n");
        return 1;
    }


    printf("Entrez les %d elements :\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    printf("Contenu du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    free(tableau);

    return 0;
}

