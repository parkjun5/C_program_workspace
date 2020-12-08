#include <stdio.h>
// *을 붙여서 포인터를 만들어준다. 
void swap(int *x, int *y)
{
	int temp ;
	temp = *x;
	//포인터가 가르키고 있는 변수의 값을 가져옴 
	*x = *y;
	*y = temp;	
 } 

int main(void)
{
	//포인터 > 메모리 주소를 지칭하는 변수
	//RAM에서 체계적으로 관리하는데이터 
	
	// &는 특정한 값의 주소를 알려준다/
	int x;
	// 4bytes 배정
	x = 5;
	// 값 을 넣어주고
	// x의 주소 그자체가 y에 들어간다
	// 이때는 *를 사용 
	int *y = &x;
	*y = 15;
//	매 우 중 요 
//	X = *Y
//	&X = Y 
	
	
	
	printf("%d",x); 
	
	// 두 변수의 값을 서로 변환하기 
	
	int a = 10;
	int b = 66;
	//포인터를 활용하지 않는다면 swap 합수의 변환값은
	// 메인에 영향을 미칠수없다.
	// 포인터를 활용한다면 함수 전체에 영향을 미칠수있다. 
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d", a, b);
	
	return 0;
}
