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
	
	printf("왼쪽 상단의 좌표   입력하세요");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("오른쪽 하단의 좌표  입력하세요"); 
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs( r.p2.x - r.p1.x );
	h = abs( r.p1.y - r.p2.y );
	
	peri = (2*w+2*h);
	area = w*h;
	
	printf("사각형의 둘레는 : %d, 넓이는 : %d", peri , area );
	
	
	
	return 0;
}

