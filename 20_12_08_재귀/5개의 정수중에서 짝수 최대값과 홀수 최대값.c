#include <stdio.h>
#define NUMBER 5
int main(void)
{
	int arr[NUMBER];
	int i, oddMax, evenMax;
	
	oddMax = 0;
	evenMax = 0;
	
	for(i = 0; i < NUMBER ;i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i]% 2 ==0)
		{
			if(evenMax < arr[i])
			{
				evenMax = arr[i];
			}
		}else{
			if (oddMax < arr[i])
			{
				oddMax = arr[i];				
			}
		}
	}
	 
	printf("¦���� ����ū���� %d�̰� Ȧ���� ���� ū���� %d �̴�.", evenMax, oddMax);
	return 0;
}
