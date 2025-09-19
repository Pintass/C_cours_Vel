#include <stdio.h>
#include <math.h>
// pour compiler : gcc tp2ex4.c -lm

// si positif = 2 
// si 0 = 1 
// si négatif = 0
int main(void) {
    int a, b, c;
    
    printf("Veuillez saisir la valeur réelle du coefficient a :\n");
    scanf("%d", &a);
    printf("Veuillez saisir la valeur réelle du coefficient b :\n");
    scanf(" %d", &b);
    printf("Veuillez saisir la valeur réelle du coefficient c :\n");
    scanf("  %d", &c);
    
    float discriminant = pow(b, 2) - 4*a*c;
    printf("Discriminant = %f \n", discriminant);
    
    if (discriminant == 0) {
    	printf("Il y a une solution puisque le discriminant = 0\n x=%f", discriminant);
    	//DONNER LES VALEURS 
    } else if(discriminant < 0) {
    	printf("Aucune solution n'est disponible car le discriminant est négatif.\n");
    } else {
    	printf("Il y a 2 solutions possibles, car le discriminant est supérieur à 0. \n x1 = %f\n x2 = %f\n", discriminant, (discriminant*-1));
    	
    }
}
