#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[10] = "�ڼ���";
	char result[5] = "������";
	// str cpy �� �� ���ڿ��� ���� ���ڿ��� �����Ͽ� �־��ش�.
	// �̶� �迭�� ���̿ʹ� ������� �����Ͽ� �����Ǥ����� 
	strcpy(result, inputOne);
	printf("%s", result); 
	return 0;
}
