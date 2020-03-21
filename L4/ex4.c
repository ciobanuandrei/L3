#include <stdio.h>
#include <stdlib.h>

typedef struct binar
{
	int bit;
	struct binar *urm;
}nod;
nod *adaugare(nod *prim, int bit)
{
	nod *p;
	p = (nod*)malloc(sizeof(nod));
	p->bit = bit;
	p->urm = prim;
	prim = p;
	return prim;
	
}
void afisare(nod *prim)
{
	nod *q;
	int k = 0;
	for (q = prim; q != NULL; q = q->urm)
		printf("%d", q->bit);
	printf("\n");

}
int main()
{
	nod *prim;
	int nr, rest;
	prim = NULL;
	printf("Dati numarul : ");
	scanf("%d", &nr);
	while (nr != 0)
	{
		rest = nr % 2;
		prim = adaugare(prim, rest);
		nr = nr / 2;
	}
	afisare(prim);
	system("pause");
	return 0;
}