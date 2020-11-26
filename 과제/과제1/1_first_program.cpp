/*1번
#include <stdio.h>

int main()
{
	printf("처음 작성하는 프로그래밍\n");

	return 0;
}*/

/*2번
#include <stdio.h>

int main(void)
{
	printf("학과 : 빅데이터분석학과\n");
	printf("학번 : 203012345\n");
	printf("성명 : 홍길동 - \"남\"\n");

	return 0;
}*/

/*3번
#define SNO 20301233   //선행처리기, 기호상수, 정수형 상수 정의, SNO라는 것을 기회 2030123으로 정의  
#define NAME "이강산" //선행처리기, 기호상수, 문자형 상수 정의, NAME이라는 것을 기호 "이강산"으로 정의 
*/

/*4번 
#include <stdio.h>
#define TAX_RATE 0.3

int main(void)
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("월급을 입력하시요: ");
	scanf_s("%d", &m_salary);
	y_salary = MONTHS * m_salary;
	printf("연봉은 %d입니다.", y_salary);
	printf("세금은 %f입니다.", y_salary*TAX_RATE);

	return 0;

}*/

/*5번
#include <stdio.h>

int main(void)
{
	char code = 'a';

	printf("%c %c %c \n", code+1, code+2, code+3);
	
	return 0;
}

// 변수 code에 'a'의 아스키 코드를 대입하고 code+1, code+2, code+3한 값을 출력하였을 때
// 문자 형태로 출력이 가능하다는 것을 알 수 있다. 

*/
