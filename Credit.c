#include <stdio.h>

int main(void){
	
	int score = 93; // 학생의 점수를 의미합니다.
	if (score > 90) {
		printf("당신은 A 학점입니다.\n");	
	}else if(score > 80){
		printf("당신은 B 학점입니다.\n");
	}else if(score > 70){
		printf("당신은 C 학점입니다.\n");
	}else{
		printf("너는  F야"); 
	}
	
	return 0;
}
