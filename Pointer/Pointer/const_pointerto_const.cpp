#include <stdio.h>

int main()
{
	const int num1 = 10;
	const int num2 = 30;
	const int * const numPtr = &num1;    // int�� ����� ����Ű��
										 //������ ���
								// int const * const numPtr ����
	*numPtr = 50;				// ���� : num1�� ���, �������� �� ���� �ʵ�				
	numPtr = &num2;				// ���� : ������(�޸� �ּ�)�� ���� �ʵ�

	/*
	constant pointer to constant : �޸� �ּҵ� ���� �ʵǰ� 
								   �޸� �ּҿ� ����� ���� ����ʵ�
	
	*/
	return 0;
}