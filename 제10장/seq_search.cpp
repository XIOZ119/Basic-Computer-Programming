#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("Ž���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++)
		if (list[i] == key)

	printf("Ž�� ���� �ε��� = %d\n", i);
	printf("Ž�� ����\n");
	return 0;
}

int binary_search(int list[], int n, int key)
{
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;

}