#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nr,k=0,copie,p=0;
	printf("Dati numaru : ");
	scanf("%d", &nr);
	copie = nr;
	while (nr != 0)
	{
		if ((nr & 1) == 1)
			p = p + (copie << k);
		nr = nr >> 1;
		k++;
	}
	printf("Patratul  este %d\n", p);
	system("pause");
	return 0;
}