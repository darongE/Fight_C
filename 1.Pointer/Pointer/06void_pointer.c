#include <stdio.h>

int main()
{
	int num = 10;
	char ctype = 'b';
	int *numPtr = &num;
	char *cPtr = &ctype;

	void *ptr;

	ptr = numPtr;
	//printf("%d\n", *ptr);    //���� : void �����ʹ� ������ �ʵ� 
	ptr = cPtr;
	//printf("%c\n", *ptr);

	//numPtr = ptr;     // int �����Ϳ� void ������ ���� X
	//cPtr = ptr;		  // char �����Ϳ� void ������ ���� X

	return 0;
}