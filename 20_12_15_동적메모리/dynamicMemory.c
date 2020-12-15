#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  *pi; //Pointer Integer
	pi = (int * )malloc(sizeof(int)); // malloc 메모리를 할당하라
	// int 만큼의 사이즈를 할당하라 
	
	if (pi == NULL)
	{
		printf("동적메모리 할당에 실패했습니다.\n");
		exit(1);
	 } 
	*pi = 100;
	// pi 가 메모리가할당된 좌표
	// *pi 포인트를 활용하여 값을 가져온다. 
	printf("%d\n", pi );
	printf("%d\n", *pi );
	// 동적 메모리를 할당하고 사용한 이후에은
	// 무조건 해당 메모리를 반환합니다. 시스템 효율성과 데이터 를 보호하기위해
	free(pi); 
	
	
	return 0;
}
