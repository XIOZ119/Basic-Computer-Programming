// ����ڷκ��� �ݰ��⸦ �޾Ƽ�, ���� ������ 1/10 ���Ϸ� �پ�� ������ �ɸ��� �ð� ����ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	int halflife;
	double initial;
	double current;
	int years = 0;

	printf("�ݰ��⸦ �Է��Ͻÿ�(��) : ");
	scanf_s("%d", &halflife);

	initial = 100.0;
	current = initial;
	while (current > initial / 10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� ��=%f", years, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð� = %d��", years);
	return 0;

}