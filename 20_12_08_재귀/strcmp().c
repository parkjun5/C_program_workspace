#include <stdio.h>
#include <string.h>

int main(void)
{
	// strcmp �� �ܾ��� ���� ������
	// �� ���ڿ��� ���Ͽ� ������������ ���Ѵ� 
	char inputOne[5] = "A";
	char inputTwo[5] = "A";
	printf("���ڿ� �� : %d \n", strcmp(inputOne, inputTwo));
	return 0;
}
