#include <stdio.h>
#include <stdlib.h>

int main()
{
	int  v[125] = { 0 }, nr, k, n, i;
	printf("dati nr de elemente : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Dati numarul de la tastura : ");
		scanf("%d", &nr);
		if (nr >= 0 || nr <= 1000)
			v[nr / 8] = v[nr / 8] | (1 << (nr % 8));
	}
	system("pause");
	return 0;
}