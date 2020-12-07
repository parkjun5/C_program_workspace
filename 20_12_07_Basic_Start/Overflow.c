#include <stdio.h>
#include <limits.h>
int main(void)
{
	//OverFlow?
	int x = INT_MAX;
//	float y = FLOAT_MAX;
//	double z = DOUBLE_MAX;
	printf("인트형이 가질수있는 최대값 = %d\n",x);
	printf("인트형의 최대값에 1을 더하면 = %d\n",x+1);
//	printf("플롯형이 가질수있는 최대값 = %f\n",y)
}
