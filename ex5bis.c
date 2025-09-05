#include <stdio.h>
int main(void)
{
	unsigned char c;
	unsigned char cbis;
	
	printf("Saisissez une lettre majuscule \n");
	scanf("%c", &c);
	cbis = c+32;
	printf("%d , %x et en miniscule : %d , %x \n", c, c, cbis, cbis);
	
	return 0;
}
