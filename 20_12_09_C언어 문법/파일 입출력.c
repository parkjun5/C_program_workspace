#include <stdio.h>

int main(void)
{
	//file 다루어서 프로그램을 활용하는 방법.
	
	// 파일 >> 오픈 and 로드
	// 파일 >> 크리에이트
	// 파일 >> 수정 리네임 or  딜리트
	// 파일 >> 닫기  or  라이트
	
	FILE *fp = NULL;
	
	fp = fopen("output.txt", "w");
	//w  쓰기 모드 r 읽기 모 드
	if(fp ==NULL)
	{
		printf("파일 열기에 실패했습니다.\n");
	 } 
	 else
	 {
	 	printf("파일 열기에 성공했습니다. \n");
	 }
	 
	fputc('h', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	 
	return 0;	
	
	
	
	
};
