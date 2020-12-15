#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	
	pc  = (char * ) malloc (100 *  sizeof(char)); 
	// 100개의 문자가 들어갈수있는 공간 배정
	
	if (pc ==NULL)
	{
		printf("동적 메모리 할당에 실패 . \n");
		exit(1); 
	 } 
	 /* pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입*/
	for ( i = 0; i < 26 ; i++) 
	{
		*(pc +i) = 'a' + i;
	};
	*(pc +i)  = 0;
	/* 아스키 코드 0은 null을 의미합니다 .*/
	 
	printf("%s\n", pc); 
	free(pc);
	return 0;
 } 
