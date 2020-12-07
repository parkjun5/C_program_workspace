#include <stdio.h>

int main(void){
	/*
	윤년 만들어주는 프로그램
	4년에 한번
	400은 가능 
	
	100은 불가능
	
	4년 가능 
	 
	*/
	int year = 2020;
	
	if ( year  % 400 ==0 || ( year %4 ==0 && year % 100 != 0 )){
		printf("%d년은 윤년입니다.", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.", year);
	}
	
	return 0;
} 
