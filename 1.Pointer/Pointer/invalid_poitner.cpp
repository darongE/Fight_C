#include <stdio.h>

int main()
{
	//int *numPtr = 0x1000;	  //�����Ϳ� 0x1000 �� ���� 
						      /* �ȵǴ� ����: �߸��� �ּҰ� */

	int *numPtr = 0x00CCFC2C;

	printf("%d\n", *numPtr);

	return 0;
}