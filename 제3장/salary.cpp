/*�����ɾ��� ����ϴ� ���α׷�*/

#include <stdio.h>

int main(void)
{
	int ysalary;
	int msalary;

	printf("������ �Է��Ͻÿ�(���� : ����): ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("�����ɾ�(���� : ����): %d\n", msalary);

	return 0;

}