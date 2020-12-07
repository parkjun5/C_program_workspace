#include <stdio.h>

int main(void){
	
	int num, x, i, sum =0;
	printf("정수의 개수를 입력하세요 : ");
	scanf("%d", &num);
	
	for (i = 0; i< num ;i++){
		printf("정수의 값을 입력하세요.");
		scanf("%d", &x);
		sum += x;
	}
	printf("%d", sum);
	
	return 0;
}
