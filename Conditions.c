#include <stdio.h>

int main(void)
{
	int x = -50 , y = 30;
	int absoluteX = (x > 0) ? x : -x;
	printf("abs(%s)를 여기서 구현 %d\n","x" , absoluteX);
	
	int max  = (x > y) ? x : y;
	int min  = (x < y) ? x : y;
	
	printf("max = %d , min = %d \n", max, min);
	return 0;
}
