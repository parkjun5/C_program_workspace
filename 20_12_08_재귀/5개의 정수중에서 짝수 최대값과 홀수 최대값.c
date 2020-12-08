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
	 
	printf("짝수중 가장큰값은 %d이고 홀수중 가장 큰값은 %d 이다.", evenMax, oddMax);
	return 0;
}
