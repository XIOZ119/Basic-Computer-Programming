// do..while���� �̿��� �޴�

#include <stdio.h>

int main(void)
{
	int i = 0;
	do
	{
		printf("1--���θ����\n");
		printf("2--���Ͽ���\n");
		printf("3--���ϴݱ�\n");
		printf("�ϳ��� �����Ͻÿ�.\n");
		scanf_s("%d", &i);
	} while (i < 1 || i>3); // i<1 �̰ų� i>3�̴�. (or����)

	printf("���õ� �޴�=%d\n", i);
	return 0;

}