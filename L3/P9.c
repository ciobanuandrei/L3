#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	a = a ^ b;
	b = a ^ b;
	a = b ^ a;
	printf("a=%d\nb=%d\n", a, b);
	system("pause");
	return 0;
}
