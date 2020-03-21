#include <stdio.h>
#include <stdlib.h>
int read(int permisiuni)
{
	 permisiuni = permisiuni | 1;
	 return permisiuni;
}
int write(int permisiuni)
{
	 permisiuni = permisiuni | (1<<1);
	 return permisiuni;
}
int delete(int permisiuni)
{
	 permisiuni = permisiuni | (1<<2);
	 return permisiuni;
}
int rename(int permisiuni)
{
	 permisiuni = permisiuni | (1 << 3);
	 return permisiuni;
}
int copy(int permisiuni)
{
	 permisiuni = permisiuni | (1<<4);
	 return permisiuni;
}
 verificare(int x)
{
	if (x & 1)
		printf("\nAre read\n");
	if ((x >> 1) & 1)
		printf("\nAre write\n");
	if ((x >> 2) & 1)
		printf("\nAre delete\n");
	if ((x >> 3) & 1)
		printf("\nAre rename\n");
	if ((x >> 4) & 1)
			printf("\nAre copy\n");
}
int main()
{
	int permisiuni=0;
	permisiuni=write(permisiuni);
	permisiuni = delete(permisiuni);
	verificare(permisiuni);
	printf("\n%d\n",permisiuni);
	system("pause");
	return 0;
	
}