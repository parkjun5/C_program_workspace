#include <stdio.h>

int main(void)
{
	int i, j;
	int gogodan[10][10];
	for (i =1; i< 10; i++)
	{
		printf("\n[%d´Ü]\n\n", i);
		
		for( j=1; j< 10 ; j++)
		{
			gogodan[i][j] = i*j;
			printf("%d * %d = %d\n", i, j, gogodan[i][j]);
		}
	}
	return 0;
}
