#include <stdio.h>

int main(void)
{
	int x =100, y = 30;
	
//	if(x ==y)
//		printf("����\n");
//	
//	else
//		printf("�޶�\n");
	

	printf("x�� y�� ������? %d\n", x==y);
	printf("x�� y�� �ٸ���? %d\n", x!=y);	
	printf("x�� y���� �� ū��? %d\n", x> y);
	printf("x�� y���� �� ū��? %d\n", x<= y);
	printf("x�� y�� ������? %d\n",(x=y));
	if (x == y)
		printf("!!!!!");
	else
		printf("�ٸ��ٴϱ�");
	
	return 0;
}
