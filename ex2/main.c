#include <stdio.h>
#include <stdlib.h>


int main() {
    int taille;


    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &taille);


    if (taille <= 0) {
        printf("La taille doit �tre sup�rieure � 0.\n");
        return 1;
    }


    int* tableau = (int*) malloc(taille * sizeof(int));
    if (tableau == NULL) {
        printf("�chec de l'allocation de m�moire.\n");
        return 1;
    }


    printf("Entrez les %d elements :\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("�l�ment %d : ", i + 1);
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

