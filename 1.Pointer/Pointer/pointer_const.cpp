#include <stdio.h>
int main()
{
	const int num = 10;	  // int�� ���
	const int *numPtr;	  // int�� ����� ����Ű�� ������ (=int const *numPtr)
	numPtr = &num;
	*numPtr = 20;		// ������ ����: num�� ���,
						// �������� �� ���� �ʵ�	

	/*pointer to constant 
	  �޸� �ּҿ� ����� ���� ������ �� ���� */

	return 0;
}