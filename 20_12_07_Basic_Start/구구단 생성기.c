#include <stdio.h>

int main(void){
	int x, i;
	printf("정수를 입력해주세요");
	scanf("%d", &x);
	
	for(i=1 ; i< 10 ; i++)
	{
		printf("%d * %d = %d\n", x, i, x * i);	
	}
	
	return 0;
}
