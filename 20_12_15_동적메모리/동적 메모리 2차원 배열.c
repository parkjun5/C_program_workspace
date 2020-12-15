#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, x, y;
	// int [x][y] 에ㅐ서 x의 크기를 할당한다. 
	int **pptr= (int **) malloc (sizeof(int*) * 8);
	// 그후 y들을 하나씩 할당한다. 
	for ( i =0; i < 8 ; i++)
	{
		*(pptr + i) = ( int * ) malloc (sizeof(int)* 6);
	}
	for( y = 0; y <8 ; y++)
	{
		for (x= 0;x < 6;x++)
		{
			*(*(pptr + y)+ x)  =  (6  * y + x)+1 ;
		}
	}
	for( y = 0; y< 8 ; y++)
	{
		for (x= 0;x < 6;x++)
		{
			printf("%3d", *(*(pptr +y)+x) );
		}
		printf("\n");
	}
	for ( y = 0 ;y < 8;y++)
	{
		free(*(pptr +y));
	}
	return 0;
}
