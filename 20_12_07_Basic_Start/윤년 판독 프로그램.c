#include <stdio.h>

int main(void){
	/*
	���� ������ִ� ���α׷�
	4�⿡ �ѹ�
	400�� ���� 
	
	100�� �Ұ���
	
	4�� ���� 
	 
	*/
	int year = 2020;
	
	if ( year  % 400 ==0 || ( year %4 ==0 && year % 100 != 0 )){
		printf("%d���� �����Դϴ�.", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.", year);
	}
	
	return 0;
} 
