#include <stdio.h>
#include <stdlib.h>
int main()
{
	int C, N, a[30],i;
	printf("Bitul de verificat : ");
	scanf("%d", &C);
	printf("Numarul de elemente : ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < N; i++)
		if ((a[i] >> C) & 1==1)
			printf("%d ", a[i]);
			
	system("pause");
	return 0;
		
}