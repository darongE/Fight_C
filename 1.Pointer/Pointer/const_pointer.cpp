#include <stdio.h>

int main()
{
	int num1 = 10;
	int num2 = 20;
	int * const numPtr = &num1;	  //int�� ������ ���
	numPtr = &num2;			     // ���� : ������(�޸��ּ�)�� ����ʵ�

	/* constant pointer : ������ ��ü�� ���
	   �޸� �ּҸ� ���� �ʵ�
	*/
}