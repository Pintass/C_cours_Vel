#include <stdio.h>
void swap(float* a, float* b);
float saisir_reel_v1();
void saisir_reel_v2(float* adresseA); 
float saisir_2_flottants_v1();
void saisir_2_flottants_v2(float* adrA, float* adrB);
void copy_2_reels(float a, float b, float* chemin1, float* chemin2);

int main(void) {

	float a = 10.0;
	float b = 20.0;
	float chemin1 = 0.0;
	float chemin2 = 0.0;
	
	float v2_1;
	float v2_2;
	
	printf("avant a = %f, b = %f \n", a, b);
	swap(&a,&b);
	printf("après a = %f, b = %f \n", a, b);
	
	
	
	// saisir_reel_v2(&v2_1);
	// saisir_2_flottants_v1();
	// saisir_2_flottants_v2(&v2_1, &v2_2);
	copy_2_reels(a, b, &chemin1, &chemin2);
	
	// printf("après v2_1 = %f, v2_2 = %f \n", v2_1, v2_2);
	printf("après chemin1 = %f, chemin2 = %f \n", chemin1, chemin2);
	return 0;
}

float saisir_reel_v1() {
	float a;
	printf("Saisissez un réel : \n");
	scanf(" %f", &a); 
	printf("saisir reel 1 %f \n", a);
	return a;
}

void saisir_reel_v2(float* adresseA) {
	printf("Saisissez un réel : \n");
	scanf(" %f", adresseA); 
	printf("saisir reel 2 %f \n", *adresseA);
}

float saisir_2_flottants_v1() {
	float c = saisir_reel_v1();
	float c2 = saisir_reel_v1();
	printf("saisir 2 floats 1  %f , %f \n", c, c2);
	return c, c2;
}

void saisir_2_flottants_v2(float* adrA, float* adrB) {
	saisir_reel_v2(adrA);
	saisir_reel_v2(adrB);
}

void copy_2_reels(float a, float b, float* chemin1, float* chemin2) {
	*chemin1 = a;
	*chemin2 = b;
	printf("copy 2 reels");
}


void swap(float* a, float* b) {
	float ptemp = *b;
	*b = *a;
	*a = ptemp;
	return;
}

