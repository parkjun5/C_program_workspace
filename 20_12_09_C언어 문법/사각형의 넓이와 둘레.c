#include <stdio.h>
#include <math.h>
struct point
{
	int x;
	int y;
};


struct rect
{
	struct point p1;
	struct point p2;
	
};

int main(void)
{
	struct rect r;
	int h, w, area, peri;
	
	printf("���� ����� ��ǥ   �Է��ϼ���");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("������ �ϴ��� ��ǥ  �Է��ϼ���"); 
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs( r.p2.x - r.p1.x );
	h = abs( r.p1.y - r.p2.y );
	
	peri = (2*w+2*h);
	area = w*h;
	
	printf("�簢���� �ѷ��� : %d, ���̴� : %d", peri , area );
	
	
	
	return 0;
}

