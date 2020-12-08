#include <stdio.h>

int main(void)
{
	char input[1001];
	
	gets(input);
	int count =0;
	// c언어에서의 \0 은 NULL을 의미한다  
	while (input[count] != '\0'){
		count ++;
	}
	printf("문자열의 길이는 %d입니다\n", count);
	printf("문자열은 %s입니다.",input);
	return 0;
}
