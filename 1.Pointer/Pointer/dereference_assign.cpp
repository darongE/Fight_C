#include <stdio.h>

int main()
{
	int *numPtr=0;
	int num = 20;
//	numPtr = num;   �����ϴ� ���� �޶� ���� 
	numPtr = &num;	//numPtr�� int ��������, &num�� int�� ������ �ּ��̹Ƿ� �ڷ����� ��ġ
					// numPtr�� pointer to int, &num1�� address of int�̹Ƿ� �ڷ����� ��ġ


	

	return 0;


}