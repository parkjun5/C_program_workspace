#include <stdio.h>

struct student // �Լ��� �ƴϱ� ������ ���� �Ķ���Ͱ� ����. 
{
	int st_num;
	char name[20];
	double GPA;
	
};


int main(void)
{
	struct student s;
	
	printf("�л��� �й��� �Է��ϼ��� :");
	scanf("%d",&s.st_num);
	printf("�л��� �̸��� �Է��ϼ��� :");
	scanf("%s",s.name);
	printf("�л��� ������ �Է��ϼ��� :");
	scanf("%lf",&s.GPA);
	printf("%d", s.st_num);
	return 0;
};
