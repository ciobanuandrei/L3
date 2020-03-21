#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, rez=0;
	printf("Primul numar : ");
	scanf("%d", &a);
	printf("Al doilea numar : ");
	scanf("%d", &b);
	while (b != 0)
	{
		if (b & 1)
			rez = rez + a;
		a = a << 1;
		b = b >> 1;
	}
	printf("Rezultatul inmultirii este : %d\n", rez);
	system("pause");
	return 0;
}