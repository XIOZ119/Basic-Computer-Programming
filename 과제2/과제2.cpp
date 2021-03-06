//과제2 문제
//※각 문항 25점

/*1. 중첩 반복문과 변수 x, y, number를 선언하여 다음과 같이 실행결과가 출력되도록 프로그램을 작성하세요
[실행결과]
정수를 입력하시오 : 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

/*
#include <stdio.h>
int main(void)
{
	int x, y, number;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &x);

	for (y = 1; y <= x; y++)
	{
		for (number = 1; number <= y; number++)
			printf("%d", number);
		printf("\n");
	}

	return 0;
}
*/

/*2. 두 개의 정수 n, m을 입력 받아서 n이 m의 배수이면 1을 반환하고 그렇지 않으면 0을 반환하는 함수 is_multiple(int n, int m)을 작성하여 다음과 같은 실행 결과가 나오도록 프로그램을 작성하세요.만약 n이 m의 배수이면(n % m)이 0임을 이용하라.

[실행결과]
첫 번째 정수를 입력하시오 : 30
두 번째 정수를 입력하시오 : 5
30는 5의 배수입니다.
*/

/*
#include <stdio.h>

void is_multiple(int n, int m);
int main(void)
{
	int n,m;

	printf("첫 번째 정수를 입력하시오 : ");
	scanf_s("%d", &n);
	
	printf("두 번째 정수를 입력하시오 : ");
	scanf_s("%d", &m);

	if (n % m == 0)
		printf("%d는 %d의 배수입니다.\n", n, m);
	else
		printf("%d는 %d의 배수가 아닙니다.\n", n, m);
}
*/

/*3. 1부터 n까지의 합(1 + 2 + 3 + ..... + n)을 계산하는 문제를 순환기법을 이용하여 다음과 같은 실행 결과가 나오도록 프로그램을 작성하세요.단, sum(3)은 3 + sum(2)로 바꿀 수 있다.

[실행결과]
정수를 입력하시오 : 10
1부터 10까지의 합 = 55
*/

/*
#include <stdio.h>

int sum(int n);

int main(void)
{
	int number;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &number);
	printf("1부터 %d까지의 합 = %d\n", number, sum(number));
	
	return 0;
}

int sum(int n)
{
	if (n <= 0)
		return 0;
	return n + sum(n - 1);
}
*/

/*4. 아주 간단한 재고 관리 시스템을 만들려고 합니다.상품마다 상품 번호가 붙어 있고 상품 번호를 사용자가 입력하면 물품이 어디 있는지 알려주는 번호를 출력합니다.상품 번호는 1부터 10까지로 하고 장소를 나타내는 번호는 1부터 5까지라고 가정한다. 1차원 배열을 사용하여 미리 상품 번호마다 장소를 1, 1, 2, 5, 3, 3, 1, 1, 2, 4 로 저장해 놓고 사용자로부터 상품 번호를 받아서 장소를 출력하는 프로그램의 결과가 다음과 같이 나오도록 코딩하세요.
교재 예제 p432 극장 예약 시스템을 참조함.

[실행결과]
상품 번호를 입력하시오 : 1
상품 번호 1의 위치는 1입니다.
*/ 

/*
#include <stdio.h>
#define NUMBER 10
#define LOCATION 10
int main(void)
{
	int a[NUMBER] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[LOCATION] = { 1, 1, 2, 5, 3, 3, 1, 1, 2, 4 };
	int x, y, i;

	while (1)
	{
		printf("상품 번호를 입력하세요: ");
		scanf_s("%d", &x);
		if (x == -1)
			break;
		else
			for (i = 0; i < NUMBER; i++)
			{
				if (a[i] == b[x - 1])
					y = i + 1;
			}
		printf("상품 번호 %d의 위치는 %d입니다. \n", x, y);
		break;
	}
	return 0;
}
*/