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
	//�����̶� n���� ���ǿ��� r���� ���Ҷ� ����
	
	//nCr r�� 0�̰ų� n �̶�� 1�̰�, 
	//�ƴ϶�� nCr(n-1, r-1)+ nCr(n-1, r) ������. 
	
	printf("3���߿� 2���� ���� %d", nCr(45,6) );



	return 0;
}
