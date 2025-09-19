#include <stdio.h>
int main(void) {
    	int nombre;
    	char choix;
	choix = 1;
    	while(&choix != "n") {
        	printf("Entrez un nombre\n");
        	scanf("%d", &nombre);
        	if (nombre %2 == 0) {
            		printf("Nombre pair !\n");
        	} else {
            		printf("Nombre non-pair\n");
        	}
        	printf("Si vous souhaitez continuer, tapez _o_, dans le cas contraire, tapez _N_ \n");
        	scanf(" %c", &choix);
        	if (choix == 'n') {
            		break;
        	}
    	} 
    	return 0;

    
}
