#include <stdio.h>
#include <stdlib.h>

void saisir_nb_eleves(int* adresseNbEleves);
float* init_tab(int adresseNbEleves);
void print_tab(int nbEleves, float* tab);
float tab_mean(int nbEleves, float* tab);

int main(void) {	
	// saisir nb notes puis grâce à ça, création du tableau (déterminer le tableau en mode dynamique),  faire la moyenne
	int nbEleves = 0;
	int* adresseNbEleves = &nbEleves;
	float* tab = NULL;
	
	saisir_nb_eleves(adresseNbEleves);
	tab = init_tab(nbEleves);
	print_tab(nbEleves, tab);
	printf("\n MOYENNE %.2f", tab_mean(nbEleves, tab));
	free(tab);
	return 0;
}

void saisir_nb_eleves(int* adresseNbEleves) {
	do {
		printf("Saisissez le nombre d'élèves de votre classe : \n");
		scanf(" %d", adresseNbEleves); 
	} while (*adresseNbEleves <=0);
}

float* init_tab(int nbEleves) {
	float* tab = malloc(nbEleves*sizeof(float));
	for(int i=0; i<nbEleves; i++) 
	{
	  do
	  {
    	printf("Veuillez remplir la note %d :\n", i+1);
    	scanf(" %f", &tab[i]);
	  }while (tab[i] <0 || tab[i] >20);
	}
	return tab;
}

void print_tab(int nbEleves, float* tab) {
    printf("================= Affichage des notes des %d élèves ================= \n", nbEleves);
    for(int i=0; i<nbEleves; i++)
    {
        printf("Valeur n°%d sur %d : %.2f \n", i+1, nbEleves, tab[i]);
    }
}

float tab_mean(int nbEleves, float* tab) {
    float total_tab = 0;
    for(int i=0; i<nbEleves; i++) 
    {
        total_tab += tab[i];
    }
    return (total_tab/nbEleves);
}




// free(tab) --> désallouer
// float* tab = malloc(sizeof(int)) --> allouer dans le TAS (pas en local donc faudra le désallouer !)#include <stdio.h>
#include <stdlib.h>

void saisir_nb_eleves(int* adresseNbEleves);
float* init_tab(int adresseNbEleves);
void print_tab(int nbEleves, float* tab);
float tab_mean(int nbEleves, float* tab);

int main(void) {	
	// saisir nb notes puis grâce à ça, création du tableau (déterminer le tableau en mode dynamique),  faire la moyenne
	int nbEleves = 0;
	int* adresseNbEleves = &nbEleves;
	float* tab = NULL;
	
	saisir_nb_eleves(adresseNbEleves);
	tab = init_tab(nbEleves);
	print_tab(nbEleves, tab);
	printf("\n MOYENNE %.2f", tab_mean(nbEleves, tab));
	free(tab);
	return 0;
}

void saisir_nb_eleves(int* adresseNbEleves) {
	do {
		printf("Saisissez le nombre d'élèves de votre classe : \n");
		scanf(" %d", adresseNbEleves); 
	} while (*adresseNbEleves <=0);
}

float* init_tab(int nbEleves) {
	float* tab = malloc(nbEleves*sizeof(float));
	for(int i=0; i<nbEleves; i++) 
	{
	  do
	  {
    	printf("Veuillez remplir la note %d :\n", i+1);
    	scanf(" %f", &tab[i]);
	  }while (tab[i] <0 || tab[i] >20);
	}
	return tab;
}

void print_tab(int nbEleves, float* tab) {
    printf("================= Affichage des notes des %d élèves ================= \n", nbEleves);
    for(int i=0; i<nbEleves; i++)
    {
        printf("Valeur n°%d sur %d : %.2f \n", i+1, nbEleves, tab[i]);
    }
}

float tab_mean(int nbEleves, float* tab) {
    float total_tab = 0;
    for(int i=0; i<nbEleves; i++) 
    {
        total_tab += tab[i];
    }
    return (total_tab/nbEleves);
}




// free(tab) --> désallouer
// float* tab = malloc(sizeof(int)) --> allouer dans le TAS (pas en local donc faudra le désallouer !)
