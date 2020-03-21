#include <stdio.h>
#include <stdlib.h>
void sum(int a[], int n, int *suma)
{
	int i;
	*suma = 0;
	for (i = 0; i < n; i++)
		*suma = *suma + a[i];
}
int main()
{
	int a[20], n, i, suma;
	printf("Dati nr de elemente : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	sum(a, n, &suma);
	printf("Suma este : %d\n", suma);
	system("pause");
	return 0;

}