#include <stdio.h>

void print(int count, int temp)
{
	if (count ==0)
	{
		return ;
	}
	else
	{
		printf("문자열을 출력합니다. %d\n", temp-count);
		print(count -1,temp);
	}
}

 int main(void)
 {
 	int count ;
 	printf("문자열 몇번 반복할까요? : ");
 	scanf("%d", &count);
 	print(count, count+1);
 	return 0;	
 }
