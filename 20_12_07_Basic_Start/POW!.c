#include <stdio.h>
#include <math.h> // pow()�� abs() 

int main(void){
	int x = 2, y = 10;
	double a = pow(x, y);
	double z = pow(2.0, 20.0);
	printf("%d�� %d������ %.0f\n",x ,y, a);
	printf("%.0f", z);
	return 0;
}
