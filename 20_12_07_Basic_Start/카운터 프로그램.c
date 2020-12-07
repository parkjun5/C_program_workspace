#include <stdio.h>
int counter = 0;

int smallest(int num)
{
	int money =50000;
	int counts =0;
	while(money >= 10)
	{ 
		counts++;
		counter += num / money;
		num %= money;
		 if (counts %2 ==1)
		 {
		 	money /= 5;
		 }
		 else
		 {
		 	money /=2;
		 }
	}
	
	return counter;
}
int main(void)
{
	int num, counter;
	printf("금액을 입력하세요.\n");
	scanf("%d", &num);
	printf("답은 %d번 입니다.", smallest(num));
	return 0;
}
