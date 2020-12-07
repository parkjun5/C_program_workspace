#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	
	while(1){

		printf("수식을 입력해주세요.\n");
		scanf("%d %c %d", &x, &o, &y);
		
		if ( o =='+')
		{
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		else if ( o =='-')
		{
			printf("%d %c %d = %d\n", x, o, y, x - y);
		} 
		else if ( o =='*')
		{
			printf("%d %c %d = %d\n", x, o, y, x * y);
		}
		else if ( o =='/')
		{
			printf("%d %c %d = %d\n", x, o, y, x / y);
		}
		else if ( o =='%')
		{
			printf("%d %c %d = %d\n", x, o, y, x % y);
		}
		else
		{
			printf("잘못된 입력값입니다.\n");
		}
		//버퍼를 처리해줘야한다
		// 줄바꿈을 처리해야함
		getchar(); 
		printf("프로그램을 종료하시겠습니까? ( y/n)\n");
		scanf("%c", &o);
		if(o =='n'|| o == 'N')
		{
			continue;
		}
		else if (o == 'y'|| o == 'Y')
		{
			break;
		}
		else 
		{
			printf("입력이 잘못되었습니다.\n");
		}
	}
	
	
	
	return 0;
}
