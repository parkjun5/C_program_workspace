#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	char reWord[256]; 
	int line = 0;
	
	printf("���� �̸��� �Է��ϼ��� :");
	scanf("%s", fname);
	
	printf("Ž���� �ܾ �Է��ϼ��� :");
	scanf("%s", word);
	
	printf("�ٲ� �ܾ �Է��ϼ��� :");
	scanf("%s",reWord);
	
	if( (fp = fopen(fname, "r"))  ==NULL)
	{
		//���� ������ ������� 
		fprintf(stderr, "���� %s�� ������ �����ϴ�. \n", fname);
		return 0;
	}
	FILE *fp2;
	fp2 = fopen(fname, "w");
	while(fgets(buffer, 256, fp))
	{
		line++;
		// str str  �� str�ȿ� ���ϴ� str�� �� �ִ��� Ȯ�� 
		if (strstr(buffer, word))
		{	printf("%s",buffer);
			fputs(strcpy(word, reWord),fp2);
			printf("%s",buffer);
//			printf("���� %d : �ܾ� %s��(��) �߰ߵǾ����ϴ�. \n", line, word);
			
		}
		
	}
	fclose(fp); 
	
	return 0;
	
}
