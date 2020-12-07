#include <stdio.h>

int main(void)
{	
	int x = 50;
	
	//float 에서 더 포함하지 못하기 떄문에 123456789 >>123456792.000
	//float y = 123456789.123456789;
	double y = 123456789.123456789;
	float z = 123456789.123456789;
	printf("x = %d\ny = %.3f\n", x, y);
	printf("float's memory = %d\ndouble's memory = %d", sizeof(z), sizeof(y));
	return 0;	
}
