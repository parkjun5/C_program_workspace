#include <stdio.h>

int main(void)
{
	int score [5][2];
	int total[2] ={0,}; // 전부다 0을 넣어준다
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d번 학생의 수학 영어 점수 : ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
		
	}
	for(i=0 ; i< 5 ; i++){
		total[0] += score[i][0];
		total[1] += score[i][1];	
	}
	
	printf("\n\n5명의 수학점수 합계 : %d", total[0]);
	printf("\n5명의 영어점수 합계 : %d", total[1]);
	return 0;
}
