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
	// 1���� õ���� ���ϴ� ���α׷�
	int x =1;
	int sum =  0;
	while (x <=1000)
	{
		sum += x;
		x++;
	}
	x =0; 
	printf("1���� õ������ ���� %d�̴�.\n", sum);

	printf("1���� õ������ ���� %d�̴�.\n", factoris(x));
	printf("1���� 5������  ���� %d�̴�.\n", factorial(5));
	return 0; 
}

