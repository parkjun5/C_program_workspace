#include <stdio.h>
#define SECOND_PER_MINUTE  60
int main(void)
{
	
	// +-*/% ������
	// 123456 ���ڴ� �� �� �� ��
	// �߰������� ! �� ++ �� �ִ�
	// ! not �̰� ���� �����ų� ++ << +1 
	
	//Get Seconds
	
	int input =1000;
	
	int minute = input / SECOND_PER_MINUTE;
	int second = input % SECOND_PER_MINUTE;
	
	printf("%d�� %d�� %d���Դϴ�.", input, minute, second);
	
	return 0;
}
