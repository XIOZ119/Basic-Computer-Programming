//�ݺ��� �̿��� ���丮�� ���ϱ�

#include <stdio.h>

int main(void)
{
	long fact = 1; // ���� fact�� long������ ����. ���丮�� ���� �������� ���� Ŀ�� �� ����.
	               // ���� ���丮���� ������ ���� ���ؼ� ����ϴ� ���̹Ƿ� �ʱⰪ�� 0�̸� ����� 0�� �Ǿ� �ݵ�� 1�� �ʱ�ȭ!
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 1; i < n; i++) 
		fact = fact * i;
	
	printf("%d!�� %d�Դϴ�.\n", n, fact);

	return 0;
}