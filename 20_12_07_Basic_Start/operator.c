#include <stdio.h>
#define SECOND_PER_MINUTE  60
int main(void)
{
	
	// +-*/% 연산자
	// 123456 숫자는 피 연 산 자
	// 추가적으로 ! 와 ++ 가 있다
	// ! not 이건 많이 보던거네 ++ << +1 
	
	//Get Seconds
	
	int input =1000;
	
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	
	printf("%d은 %d분 %d초입니다.", input, minute, second);
	
	return 0;
}
