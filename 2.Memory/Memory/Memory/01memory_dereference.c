#include <stdio.h>
#include <stdlib.h>   //malloc, free �Լ��� ����� ����

int main()
{
	int num1 = 20;
	int *numPtr1;

	numPtr1 = &num1;
	int *numPtr2;

	numPtr2 =malloc(sizeof(int));		    // ����

	//numPtr2 = (int*)malloc(sizeof(int));  //int�� 4byte

	printf("%p\n", numPtr1);			//type memory address
	printf("%p\n", numPtr2);

	free(numPtr2);						// �޸� ����

	return 0;

}