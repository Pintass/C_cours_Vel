#include <stdio.h>
int main(void)
{
	unsigned char c;
	
	printf("Saisissez un caractère \n");
	scanf("%c", &c);
	printf("%d , %x", c, c);
	
	return 0;
}
