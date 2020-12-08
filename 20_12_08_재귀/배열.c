#include <stdio.h>
#include <limits.h>
#define NUMBER 5 //배열의 크기 지정 
int main(void)
{
	int i, max, min, index;
	int array[NUMBER];
	max = 0 ;
	index = 0;
	min =INT_MAX;
	for (i=0 ; i< NUMBER ; i++)
	{
		scanf("%d", &array[i]);
		if (max < array[i])
		{
			max = array[i];
			index = i+1;
		}
		
	}
	
	printf("가장 큰값과 그의 인덱스는 %d과 %d번쨰이다. ", max, index);
		for (i=0 ; i< NUMBER ; i++)
	{
		if (min > array[i])
		{
			min = array[i];
			index = i+1;
		}
		
	}
	
	printf("가장 큰값과 그의 인덱스는 %d과 %d번쨰이다. ", min, index);
	return 0;
}
