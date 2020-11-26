#include <stdio.h> // print 함수 쓰기 위해서 
#include <math.h> // sqrt 함수 쓰기 위해서 

int main(void)
{
	double a, b, c, dis;

	printf("계수 a, 계수 b, 계수 c를 차례대로 입력하시오: ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
		printf("방정식의 근은 %f입니다.", -c / b);
	else
	{
		dis = sqrt(b * b * -4.0 * a * c);
		if (dis >= 0)
		{
			printf("방정식의 근은 %f입니다.\n", (-b + dis) / (2.0 * a));
			printf("방정식의 근은 %f입니다.\n", (-b - dis) / (2.0 * a));
		}
		else
			printf("실근이 존재하지 않습니다.\n");
	}
	return 0;
}