#include <stdio.h>

int factoris(int x){
	if (x > 1000)
		return 0;
	else
		return x + factoris(x+1);
}
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}

int main(void)
{
	// 1부터 천까지 더하는 프로그램
	int x =1;
	int sum =  0;
	while (x <=1000)
	{
		sum += x;
		x++;
	}
	x =0; 
	printf("1부터 천까지의 합은 %d이다.\n", sum);

	printf("1부터 천까지의 합은 %d이다.\n", factoris(x));
	printf("1부터 5까지의  곱은 %d이다.\n", factorial(5));
	return 0; 
}

