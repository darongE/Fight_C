#include <stdio.h>

int main()
{
	int *numPtr;		
	int num = 10; 
	numPtr = &num;	   //num�� �޸� �ּҸ� ������ ������ ����
	printf("%p\n", numPtr);
	printf("%p\n", &num);


	// pointer to int


	return 0;
}