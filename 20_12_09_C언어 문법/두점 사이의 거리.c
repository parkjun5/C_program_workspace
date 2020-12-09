#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	int xDiff, yDiff;
	double distance;
	
	printf("1번점의 좌표를 입력해주세요 :");
	scanf("%d %d", &p1.x, &p1.y);
	printf("2번점의 좌표를 입력해주세요 :");
	scanf("%d %d", &p2.x, &p2.y);
	
	xDiff = p1.x - p2.x;
	yDiff = p1.y - p2.y;
	// sqrt 는 제곱근 구하는 함수 
	distance = sqrt(xDiff * xDiff + yDiff* yDiff);
	printf("두 점간의 사이는 %f 입니다.\n",distance);
	float a = sqrt(612);
	printf("%f", a);
	return 0;
}
 
