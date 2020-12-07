#include <stdio.h>

int hour;
int minute;
int minuteAdd;

void counter()
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
	

}

int main(void)
{
	//if you use scanf and get char data, 
	// u need remove enter input data
	// so u can use getchar() and clear input buffer
	
	// 어셈블리어 기계어와 일대일 대응이 되는 컴퓨터 프로그래밍 저급 언어
	// POINTER 중요
	
	// 전 역  변수 처음 사용하겠다. 
//	int count = 5;
//	hello(count);
//	
	printf("시를 입력하세요: ");
	scanf("%d", &hour);
	printf("분을 입력하세요: ");
	scanf("%d", &minute);
	printf("더할분을 입력하세요 : ");
	scanf("%d", &minuteAdd);
	printf("%d시 %d분\n", hour, minute);
	counter();
	printf("%d시 %d분\n", hour, minute);
	
}
int hello(int count)
{ 
	if (count == 0)
	{	
		return 0;
	}
	printf("Hello World * %d \n", count);
	return hello(count-1);
} 
