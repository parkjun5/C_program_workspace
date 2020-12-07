#include <stdio.h>
// 이미 정해진 법칙과 같은것은 상수로 정해준다.
// final 같 
#define MONTHS 12


int main(void)
{
	double monthsSalary =1000.5;

	printf("$ %.2f", MONTHS*monthsSalary);
	
	return 0;
	
}
