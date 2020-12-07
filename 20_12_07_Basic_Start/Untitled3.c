#include <stdio.h>

int main(void)
{
	int x;
	float y;
	int z = 3;
	x = 5;
	y = 3.125615;
	printf("%d, %0.2f, %d\n", x, y,z);
	printf("변수 x의 메모리 크기는 %d입니다.",sizeof(x));
	return 0;
	
}
