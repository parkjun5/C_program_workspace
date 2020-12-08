#include <stdio.h>
#include <string.h>

int main(void)
{
	// strcmp 는 단어장 사전 구현시
	// 두 문자열을 비교하여 사전적순서를 비교한다 
	char inputOne[5] = "A";
	char inputTwo[5] = "A";
	printf("문자열 비교 : %d \n", strcmp(inputOne, inputTwo));
	return 0;
}
