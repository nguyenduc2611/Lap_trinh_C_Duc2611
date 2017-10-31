#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	int j =0;
	int i=1;
	int* p;
	p = (int *) calloc(100, sizeof(int));
	printf("nhap so n la: ");
	scanf("%d", &n);
	*p =*(p+1)= 1;
	while (*(p+i)<n)
	{
		*(p+i+1)=*(p+i)+*(p+i-1);
		i++;
	}
	for (j=0;j<i;j++)
	{
		printf("\n %d", p[j]);
	}
	free (p);
	return 0;
}
