#include <stdio.h>

int hour;
int minute;
int minuteAdd;

void counter()
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
	

}

int main(void)
{
	//if you use scanf and get char data, 
	// u need remove enter input data
	// so u can use getchar() and clear input buffer
	
	// ������� ����� �ϴ��� ������ �Ǵ� ��ǻ�� ���α׷��� ���� ���
	// POINTER �߿�
	
	// �� ��  ���� ó�� ����ϰڴ�. 
//	int count = 5;
//	hello(count);
//	
	printf("�ø� �Է��ϼ���: ");
	scanf("%d", &hour);
	printf("���� �Է��ϼ���: ");
	scanf("%d", &minute);
	printf("���Һ��� �Է��ϼ��� : ");
	scanf("%d", &minuteAdd);
	printf("%d�� %d��\n", hour, minute);
	counter();
	printf("%d�� %d��\n", hour, minute);
	
}
int hello(int count)
{ 
	if (count == 0)
	{	
		return 0;
	}
	printf("Hello World * %d \n", count);
	return hello(count-1);
} 
