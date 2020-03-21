#include <stdio.h>
#include <string.h>
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
		printf("%d",binary[i]);
	printf("\n");
}
void BinaryInverse(int nr)
{
	nr = nr^255;
	DecimalToBinary(nr);
	printf("Inversu binar in zecimal : %d\n\n", nr );
}
int main()
{
	int N, nr,i;
	printf("Numaru de elemente : ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("Cititi elementu nr %d : ", i + 1);
		scanf("%d", &nr);
		printf("\n%d in binar : ", nr);
		DecimalToBinary(nr);
		printf("Inversul binar : ");
		BinaryInverse(nr);
	}
	system("pause");
	return 0;
}