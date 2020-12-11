#include <stdio.h>

struct student // 함수가 아니기 떄문에 따로 파라미터가 없다. 
{
	int st_num;
	char name[20];
	double GPA;
	
};


int main(void)
{
	struct student s;
	
	printf("학생의 학번을 입력하세요 :");
	scanf("%d",&s.st_num);
	printf("학생의 이름을 입력하세요 :");
	scanf("%s",s.name);
	printf("학생의 학점을 입력하세요 :");
	scanf("%lf",&s.GPA);
	printf("%d", s.st_num);
	return 0;
};
