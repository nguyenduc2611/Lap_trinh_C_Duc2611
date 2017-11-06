#include <stdio.h>
#include <stdlib.h>

struct sinhvien
{
	char Ten[25];
	char Lop[10];
	int Toan;
	int Ly;
	int Hoa;
};

void main(void)
{
	int m;
	int n;
	int i;
	printf("nhap so sinh vien: ");
	scanf("%d", &m);
	n=m;
	struct sinhvien sv[n]; 
	for (i = 1; i <= n; i++)
	{
		printf("\nnhap thong tin sinh vien thu %d", i);
		printf("\nHo va ten: ");
		fflush(stdin);
		gets(sv[i].Ten);
		printf("\nLop: ");
		fflush(stdin);
		gets(sv[i].Lop);
		printf("\nDiem Toan: ");
		scanf("%d", &sv[i].Toan);
		printf("\nDiem Ly: ");
		scanf("%d", &sv[i].Ly);
		printf("\nDiem Hoa: ");
		scanf("%d", &sv[i].Hoa);
	}
	printf("\nTHONG TIN SINH VIEN:\n");
	for (i = 1; i <= n; i++)
	{
		printf("\nThong tin sinh vien thu %d:", i);
		printf("\nHo ten: %s ", sv[i].Ten);
		printf("\nLop: %s", sv[i].Lop);
		printf("\nDiem Toan: %d", sv[i].Toan);
		printf("\nDiem Ly: %d", sv[i].Ly);
		printf("\nDiem Hoa: %d", sv[i].Hoa);
		printf("\n");
	}
	getch();
}
