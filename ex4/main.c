#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, i;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];


    for(i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    int max = tableau[0];
    for(i = 1; i < n; i++) {
        if(tableau[i] > max) {
            max = tableau[i];
        }
    }


    printf("L'element le plus grand dans le tableau est : %d\n", max);

    return 0;
}
