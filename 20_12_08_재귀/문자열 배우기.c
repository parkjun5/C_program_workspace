#include <stdio.h>

int main(void)
{
	char input[1001];
	
	gets(input);
	int count =0;
	// c������ \0 �� NULL�� �ǹ��Ѵ�  
	while (input[count] != '\0'){
		count ++;
	}
	printf("���ڿ��� ���̴� %d�Դϴ�\n", count);
	printf("���ڿ��� %s�Դϴ�.",input);
	return 0;
}
