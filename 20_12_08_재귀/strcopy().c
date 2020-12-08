#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[10] = "박세준";
	char result[5] = "바쿠세준";
	// str cpy 는 앞 문자열에 뒤의 문자열을 복사하여 넣어준다.
	// 이때 배열의 길이와는 상관없이 복사하여 가져ㅗㅇㄴ다 
	strcpy(result, inputOne);
	printf("%s", result); 
	return 0;
}
