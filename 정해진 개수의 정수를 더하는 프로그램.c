#include <stdio.h>

int main(void){
	
	int num, x, i, sum =0;
	printf("������ ������ �Է��ϼ��� : ");
	scanf("%d", &num);
	
	for (i = 0; i< num ;i++){
		printf("������ ���� �Է��ϼ���.");
		scanf("%d", &x);
		sum += x;
	}
	printf("%d", sum);
	
	return 0;
}
