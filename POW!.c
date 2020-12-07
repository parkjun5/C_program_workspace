#include <stdio.h>
#include <math.h> // pow()와 abs() 

int main(void){
	int x = 2, y = 10;
	double a = pow(x, y);
	double z = pow(2.0, 20.0);
	printf("%d의 %d제곱은 %.0f\n",x ,y, a);
	printf("%.0f", z);
	return 0;
}
