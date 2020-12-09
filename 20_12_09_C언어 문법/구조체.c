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
	// 구조체란? 
	// Java 의 Class 모체가 되는 것으로  여러개의 자료형을 
	// 묶어서 자료형을 만듬 
	
	struct student s;
	s.number = 20150001;
	strcpy(s.name, "홍길동");
	s.grade = 4.5;
	
	printf("학번은 %d \n", s.number);
	printf("이름은 %s \n", s.name);
	printf("성적은 %.1f \n ", s.grade);
	
	return 0;
}
