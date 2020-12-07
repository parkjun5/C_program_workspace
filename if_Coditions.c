#include <stdio.h>

int main(void)
{
//	int a = 0;
//	
//	while( 1 ){
//		printf("%d\n", a);
//		if(a == 10)
//			break;
//		a++;
//	}
	int x = -150;
	
	if(x < 0){
		x = -x;
	}
	printf("x의 절대값은 %d 입니다.\n",x);
	return 0;
}
