/*1��
#include <stdio.h>

int main()
{
	printf("ó�� �ۼ��ϴ� ���α׷���\n");

	return 0;
}*/

/*2��
#include <stdio.h>

int main(void)
{
	printf("�а� : �����ͺм��а�\n");
	printf("�й� : 203012345\n");
	printf("���� : ȫ�浿 - \"��\"\n");

	return 0;
}*/

/*3��
#define SNO 20301233   //����ó����, ��ȣ���, ������ ��� ����, SNO��� ���� ��ȸ 2030123���� ����  
#define NAME "�̰���" //����ó����, ��ȣ���, ������ ��� ����, NAME�̶�� ���� ��ȣ "�̰���"���� ���� 
*/

/*4�� 
#include <stdio.h>
#define TAX_RATE 0.3

int main(void)
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &m_salary);
	y_salary = MONTHS * m_salary;
	printf("������ %d�Դϴ�.", y_salary);
	printf("������ %f�Դϴ�.", y_salary*TAX_RATE);

	return 0;

}*/

/*5��
#include <stdio.h>

int main(void)
{
	char code = 'a';

	printf("%c %c %c \n", code+1, code+2, code+3);
	
	return 0;
}

// ���� code�� 'a'�� �ƽ�Ű �ڵ带 �����ϰ� code+1, code+2, code+3�� ���� ����Ͽ��� ��
// ���� ���·� ����� �����ϴٴ� ���� �� �� �ִ�. 

*/
