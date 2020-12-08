#include <stdio.h>
int nCr(int n, int r)
{
	
	if (r == 0||r ==n){
//		printf("%d, %d\n",n,r);
		return 1;
	}
	else
	{
		return nCr(n-1, r-1) + nCr(n-1,r);
	}
}


int main(void)
{
	//조합이람 n개의 물건에서 r개를 택할때 조합
	
	//nCr r이 0이거나 n 이라면 1이고, 
	//아니라면 nCr(n-1, r-1)+ nCr(n-1, r) 과같다. 
	
	printf("3개중에 2개의 조합 %d", nCr(45,6) );



	return 0;
}
