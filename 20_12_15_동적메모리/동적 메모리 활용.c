#include <stdio.h>
#include <stdlib.h>

struct Book
{
	int num;
	char title[100];
	
};
void showBook(struct Book *p, int n)
{
	int i ;
	for (i = 0; i< n; i++)
	{
		printf("번호 : %d 제목 : %s \n", (p+i)-> num, (p+i) -> title );
	}
}

int main(void)
{
	struct Book *p;
	p = (struct Book *) malloc ( 2 *  sizeof(struct Book));
	
	if (p == NULL)
	{
		printf("동적 메모리 할당에 실패해씃ㅅㅂ니다. \n");
		exit(1);
	}
	
	p -> num = 1;
	strcpy(p->title, "C Programming" );
	
	(p +1) ->num = 2;
	strcpy((p+1)-> title, "Data Structure");
	
	showBook(p,2);
	free(p);
	
	return 0;
};
