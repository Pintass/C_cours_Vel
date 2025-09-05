#include <stdio.h>
int main(void)
{
	int a = 'A';
	int b = 'a';
	int temp; // variable permettant de stocker a pour l'attribuer à b
	
	printf("La première valeur est : %d, la deuxième valeur est : %d \n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("Après échange, La première valeur est : %d, la deuxième valeur est : %d \n", a, b);
	
	return 0;
}
