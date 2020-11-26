//반복을 이용한 팩토리얼 구하기

#include <stdio.h>

int main(void)
{
	long fact = 1; // 변수 fact를 long형으로 정의. 팩토리얼 값은 생각보다 아주 커질 수 있음.
	               // 또한 팩토리얼은 정수를 전부 곱해서 계산하는 것이므로 초기값이 0이면 결과는 0이 되어 반드시 1로 초기화!
	int i, n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 1; i < n; i++) 
		fact = fact * i;
	
	printf("%d!은 %d입니다.\n", n, fact);

	return 0;
}