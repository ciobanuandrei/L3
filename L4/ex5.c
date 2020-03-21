#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p, a[20] = { 1,3,2,51,5,2,0 };
	p = a;
	printf("Intial pointerul indica spre primul element al tabloului, a[0]=%d\n", a[0]);
	p++;
	printf("In urma incrementarii adresei pointer-ului, indexul elementului spre care indica creste cu 1 si indica spre a[1]=%d\n", a[1]);
	(*p)--;
	printf("In urma decrementarii valorii pointer-ului, valoarea  elementului spre care indica scade cu 1 : a[1]=%d\n", a[1]);
	p--;
	printf("In urma decrementarii adresei pointer-ului, indexul elementului spre care indica scade cu 1 si indica spre a[0]=%d\n", a[0]);
	(*p)++;
	printf("In urma incrementarii valorii pointer-ului, valoarea elementului spre care indica creste cu 1 : a[0]=%d\n", a[0]);
	system("pause");
	return 0;

}