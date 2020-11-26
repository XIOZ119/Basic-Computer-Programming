// 사용자로부터 반감기를 받아서, 방사능 물질이 1/10 이하로 줄어들 때까지 걸리는 시간 계산하는 프로그램

#include <stdio.h>

int main(void)
{
	int halflife;
	double initial;
	double current;
	int years = 0;

	printf("반감기를 입력하시오(년) : ");
	scanf_s("%d", &halflife);

	initial = 100.0;
	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d년 후에 남은 양=%f", years, current);
	}
	printf("1/10 이하로 되기까지 걸린 시간 = %d년", years);
	return 0;

}