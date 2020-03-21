#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int a[20], int n,int cautat)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == cautat)
			return i + 1;
	return 0;
}

int main()
{
	int a[20], n, i, cautat,pozitie;
	printf("numaru de elemente : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("numarul de cautat : ");
	scanf("%d", &cautat);
	pozitie = LinearSearch(a, n, cautat);
	if (pozitie != 0)
		printf("\n%d se gaseste la pozitia %d\n", cautat, pozitie);
	else
		printf("\n%d nu se gaseste in tablou\n",cautat);
	system("pause");
	return 0;
}