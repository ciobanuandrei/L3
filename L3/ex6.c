#include <stdio.h>
#include <stdlib.h>

void DecimalToBinary(int nr)
{
	int binary[8] = { 0 }, k = 0, i;
	while (nr > 0)
	{
		binary[k] = nr % 2;
		nr = nr / 2;
		k++;
	}
	for (i = 7; i >= 0; i--)
		printf("%d", binary[i]);
	printf("\n");
}
int main()
{
	int nr, ValMax=0,i,k=7;
	printf("Dati un nr intre 0 si 255 : ");
	scanf("%d", &nr);
	printf("Valoarea binara a lui %d este : ", nr);
	DecimalToBinary(nr);
	for (i = 7; i >= 0; i--)
		if (((nr >> i) & 1) == 1)
		{
			ValMax = ValMax | (1 << k);
			k--;
		}
	printf("Valoarea binara maxima este : ");
	DecimalToBinary(ValMax);
	system("pause");
	return 0;


}