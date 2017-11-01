#include <stdio.h>
#include <conio.h>

int chuyen_doi_so_la_ma(char la_ma)
{
	int thap_phan;
	switch (la_ma)
	{
		case 'I':
			thap_phan=1;
			break;
		case 'V':
			thap_phan=5;
			break;
		case 'X':
			thap_phan=10;
			break;
		case 'L':
			thap_phan=50;
			break;
		case 'C':
			thap_phan=100;
			break;
		case 'D':
			thap_phan=500;
			break;
		case 'M':
			thap_phan=1000;
			break;
		default :
			thap_phan=0;
			break;
	}
	return (thap_phan);
}
int main()
{
	int i = 0;
	char so_la_ma;
	char* p;
	p = (char *) calloc(100, sizeof(char));
	int so_thap_phan;
	printf("moi nhap so la ma: ");
	scanf("%s", &so_la_ma);
	*p=so_la_ma;
	while (p[i] != '\0')
	{
		i++;
	}
	so_thap_phan=chuyen_doi_so_la_ma(so_la_ma);
	if (so_thap_phan == 0)
	{
		printf("\nso vua nhap khong phai so la ma");
	}
	else
	{
		printf("\n%d", so_thap_phan);
	}
	return 0;
}
