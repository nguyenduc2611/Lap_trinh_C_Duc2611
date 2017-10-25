#include <stdio.h>
#include <conio.h>

int main()
{
	int F;
	printf("nhap do F: ");
	scanf("%d", &F);
	printf("\nDo C: %f", ((5*((float)F-32))/9));
	return 0;
}
