#include <stdio.h>

int main(void){
	
	int score = 93; // �л��� ������ �ǹ��մϴ�.
	if (score > 90) {
		printf("����� A �����Դϴ�.\n");	
	}else if(score > 80){
		printf("����� B �����Դϴ�.\n");
	}else if(score > 70){
		printf("����� C �����Դϴ�.\n");
	}else{
		printf("�ʴ�  F��"); 
	}
	
	return 0;
}
