#include <stdio.h>

int main(void)
{
	int score [5][2];
	int total[2] ={0,}; // ���δ� 0�� �־��ش�
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d�� �л��� ���� ���� ���� : ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
		
	}
	for(i=0 ; i< 5 ; i++){
		total[0] += score[i][0];
		total[1] += score[i][1];	
	}
	
	printf("\n\n5���� �������� �հ� : %d", total[0]);
	printf("\n5���� �������� �հ� : %d", total[1]);
	return 0;
}
