#include <stdio.h>

int main()
{
	int *numPtr;		
	int num = 20;

	numPtr = &num;		// num�� �޸� �ּҸ� ������ ���� ����
	*numPtr = 50;		// ������ �����ڷ� �޸� �ּҿ� �����Ͽ� 50�� ����

	printf("%d\n", *numPtr);	// result : 50
	printf("%d\n", num);		// result : 50

	return 0;
}