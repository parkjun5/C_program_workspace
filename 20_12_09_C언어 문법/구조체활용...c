#include <stdio.h>
#include <stdlib.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;
	
	printf("학번을 입력하세요 :");
	scanf("%d", &s.number);
	printf("이름을 입력하세요 : ");
	scanf("%s", s.name);
	// 배열은 그자체가 포인터의 역할을 ㅏ기 떄문에
	// 따로 & 포인트를 붙여줄 이유가 없다.
	printf("성적을 입력하세요");
	// 더블의 경우 lf로 입력받아야한다. 
	scanf("%lf", &s.grade);
	
	printf("학번은 %d \n", s.number);
	printf("이름은 %s \n", s.name);
	printf("성적은 %.1f \n ", s.grade);
	return 0;
}
