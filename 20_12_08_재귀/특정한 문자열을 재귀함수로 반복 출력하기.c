#include <stdio.h>

void print(int count, int temp)
{
	if (count ==0)
	{
		return ;
	}
	else
	{
		printf("���ڿ��� ����մϴ�. %d\n", temp-count);
		print(count -1,temp);
	}
}

 int main(void)
 {
 	int count ;
 	printf("���ڿ� ��� �ݺ��ұ��? : ");
 	scanf("%d", &count);
 	print(count, count+1);
 	return 0;	
 }
