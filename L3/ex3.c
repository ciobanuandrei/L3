#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nr;
	printf("Dati numarul : ");
	scanf("%d", &nr);
	if ((nr >> 31) - (-nr >> 31) ==-1)
		printf("\nNumarul este negativ\n");
	else if ((nr >> 31) - (-nr >> 31) == 1)
		printf("\nNumarul este pozitiv\n");
	else
		printf("\nNumarul este zero\n");
	system("pause");
	return 0;
}