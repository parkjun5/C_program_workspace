#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  *pi; //Pointer Integer
	pi = (int * )malloc(sizeof(int)); // malloc �޸𸮸� �Ҵ��϶�
	// int ��ŭ�� ����� �Ҵ��϶� 
	
	if (pi == NULL)
	{
		printf("�����޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	 } 
	*pi = 100;
	// pi �� �޸𸮰��Ҵ�� ��ǥ
	// *pi ����Ʈ�� Ȱ���Ͽ� ���� �����´�. 
	printf("%d\n", pi );
	printf("%d\n", *pi );
	// ���� �޸𸮸� �Ҵ��ϰ� ����� ���Ŀ���
	// ������ �ش� �޸𸮸� ��ȯ�մϴ�. �ý��� ȿ������ ������ �� ��ȣ�ϱ�����
	free(pi); 
	
	
	return 0;
}
