#include <stdio.h>
#include <limits.h>
#define NUMBER 5 //�迭�� ũ�� ���� 
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
	
	printf("���� ū���� ���� �ε����� %d�� %d�����̴�. ", max, index);
		for (i=0 ; i< NUMBER ; i++)
	{
		if (min > array[i])
		{
			min = array[i];
			index = i+1;
		}
		
	}
	
	printf("���� ū���� ���� �ε����� %d�� %d�����̴�. ", min, index);
	return 0;
}
