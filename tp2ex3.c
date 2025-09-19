#include <stdio.h>
int main(void) {
    int secondes;
    int calcul;
    int sec_parjour = 86400;
    int sec_parheure = 3600;
    unsigned char sec_parminute = 60;
    unsigned char jours;
    unsigned char heures;
    unsigned char minutes;
    char choix;
    do{
    
	    printf("Veuillez saisir une valeur temporelle en secondes.\n");
	    scanf("%d", &secondes); 
	    // on déduit les jours des secondes (/86400) 
	    jours = secondes/sec_parjour;
	    secondes %= sec_parjour;
	    
	    // on déduit les heures des secondes restantes (/3600) 
	    heures = secondes/sec_parheure;
	    secondes %=sec_parheure;
	    
	    // on déduit les minutes des secondes (/60) 
	    minutes = secondes/sec_parminute;
	    secondes %=sec_parminute;
	    
	    printf("Ce temps correspond à %d jour(s), %d heure(s), %d minute(s), %d seconde(s);\n", jours, heures, minutes, secondes);
	    printf("Souhaitez vous continuer ? (Tapez _O_ pour Oui, _N_ pour Non\n");
	    scanf(" %c", &choix);
	    if(choix == 'N' || choix == 'n') {
	    	return 0;
	    } else{
	    	do { 
	    		printf("Souhaitez vous continuer ? (Tapez _O_ pour Oui, _N_ pour Non\n");
	    		scanf(" %c", &choix);
	    	}while (choix != 'O' && choix != 'o');
	    }
    }while(choix != 'n');
    
    
}
