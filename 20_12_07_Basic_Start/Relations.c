#include <stdio.h>

int main(void)
{
	int x =100, y = 30;
	
//	if(x ==y)
//		printf("같앙\n");
//	
//	else
//		printf("달라\n");
	

	printf("x와 y가 같은가? %d\n", x==y);
	printf("x와 y가 다른가? %d\n", x!=y);	
	printf("x가 y보다 더 큰가? %d\n", x> y);
	printf("x가 y보다 더 큰가? %d\n", x<= y);
	printf("x에 y를 넣으면? %d\n",(x=y));
	if (x == y)
		printf("!!!!!");
	else
		printf("다르다니깡");
	
	return 0;
}
