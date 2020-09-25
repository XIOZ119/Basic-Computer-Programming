/*환율을 계산하는 프로그램*/

#include <stdio.h>

int main(void)
{
	double rate;
	double usd;
	int krw;

	printf("환율을 입력하시오: ");
	scanf_s("%lf", &rate);

	printf("원화 금액을 입력하시오: ");
	scanf_s("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %lf달러입니다.\n", krw, usd);

	return 0;
}