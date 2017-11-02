#include <stdio.h>
#include <conio.h>
#include <math.h>
int so_nguyen_to(int n)
{
	int i;
	int m;
	int k=0;
	m=sqrt(n);
	for (i=2;i<=m;i++)
	{
		if((n%i)==0)
		{
			k++;
		}
	}
	return k;
}
void main(void)
{
	int n;
	int k;
	printf("nhap so n: ");
	scanf("%d", &n);
	k=so_nguyen_to(n);
	if(k==0)
	{
		printf("\nso %d la so nguyen to", n);
	}
	else
	{
		printf("\nso %d khong phai so nguyen to", n);
	}
}
