// ������ ������ ���α׷�
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second;
	// const int SEC_PER_MINUTE = 60 <- define ��ſ� ����

	printf("�� ������ �ð��� �Է��Ͻÿ�:(32���� ����) ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("%d�ʴ� %d�� %d�� �Դϴ�. \n", input, minute, second);
	return 0;

} 