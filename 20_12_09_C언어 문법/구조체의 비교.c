#include <stdio.h>

struct point
{
	int x;
	int y;
};

int comparePoint(struct point p1, struct point p2)
{
	int result = 0;
		if((p1.x == p2.x) && (p1.y == p2.y))
	{
		result =1;
	}
	return result;
}

int main(void)
{
	struct point p1;
	struct point p2;
	
	p1.x = 30;
	p1.y = 10;
	
	p2.x = 30;
	p2.y = 10;
//	 ����ü�� ���ϱ� ���ؼ�
//   ��ü�� ������ ���� ���ؾ��Ѵ�. 
//	if(p1 == p2){
//		prinft("???")
//	}
	
	int result = comparePoint(p1,p2);
	printf("result = %d", result);
	return 0;
}
