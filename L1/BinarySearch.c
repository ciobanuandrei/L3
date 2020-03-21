#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int a[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = (l + r) / 2;
		if (a[mid] == x)
			return mid + 1;
		else if (a[mid] > x)
			return BinarySearch(a, l, mid - 1, x);
		else
			return BinarySearch(a, mid + 1, r, x);
	}
	return 0;
}

int main()
{
	int a[20], n, x, i, pozitie;
	printf("Dati nr de elemente : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("Dati elementul cautat : ");
	scanf("%d", &x);
	pozitie = BinarySearch(a, 0, n - 1, x);
	if (pozitie != 0)
		printf("\n%d se afla pe pozitia %d\n", x, pozitie);
	else
		printf("\n%d nu se gaseste in vector\n", x);
	system("pause");
	return 0;
}