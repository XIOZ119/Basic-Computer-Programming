#include <stdio.h>
#define SIZE 10

int main(void)
{
	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("탐색할 값을 입려하시오: ");
	scanf_s("%d", &key);

	for (i = 0; i < SIZE; i++)
		if (list[i] == key)

	printf("탐색 성공 인덱스 = %d\n", i);
	printf("탐색 종료\n");
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