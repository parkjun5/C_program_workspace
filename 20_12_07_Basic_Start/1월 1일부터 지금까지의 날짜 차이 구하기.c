#include <stdio.h>

int getDaysdiff(int month, int day)
{
	int i , sum =0;
	for ( i = 1 ; i < month ; i++)
	{
		if (i == 2){
			sum +=28;
		}
		else if (i%2==0)
		{
			sum += 30;	
		}
		else
		{
			sum += 31;
		}
		
		}
	return day+ sum;
}
int main(void)
{
	int month, day;
	printf("현재의 날짜(월 일)을 입력해주세요.");
	scanf("%d %d", &month, &day);
	printf("날자 차이는 %d입니다,",getDaysdiff(month, day));
	return 0;
} 
