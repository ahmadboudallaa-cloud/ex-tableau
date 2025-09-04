#include <stdio.h>
#include <stdlib.h>



int main() {
    int n, i;
    int somme = 0;
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n];
    for(i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }


    for(i = 0; i < n; i++) {
        somme += tableau[i];
    }


    printf("La somme totale des elements du tableau est : %d\n", somme);

    return 0;
}
