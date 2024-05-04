#include <stdio.h>

int pgcd(int a, int b) {
    // Utilisation de l'algorithme d'Euclide pour calculer le PGCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Demande à l'utilisateur de saisir deux nombres entiers
    printf("Entrez le premier nombre entier : ");
    scanf("%d", &num1);
    
    printf("Entrez le deuxième nombre entier : ");
    scanf("%d", &num2);
    
    // Calcul du PGCD des deux nombres
    int resultat = pgcd(num1, num2);
    
    // Affichage du résultat
    printf("Le PGCD de %d et %d est : %d\n", num1, num2, resultat);
    
    return 0;
}
