#define _CRT_SECURE_NO_WARNINGS

//����: visual studio 2005 �̻���� 'scanf', fopen' , 'strcpy' ���� ����ϸ� 
//Warning C4996 ��� �߻��ϰ� �ȴ�.

//�ذ�å: secure ���� scanf_s ��带 ����ؼ�
//�ذ��� �϶�� ������, �ٸ� ������ ���⿡�� ȣȯ���� ������ �����Ƿ� 
//#define _CRT_SECURE_NO_WARNINGS ��ũ�θ� ���δ�.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1;
	int num2;

	int *numPtr1 = malloc(sizeof(int));
	int *numPtr2 = malloc(sizeof(int));

	
	scanf("%d %d", &num1, &num2);
	 
	*numPtr1 = num1;		//�������Ͽ� ���� ����
	*numPtr2 = num2;

	printf("%d\n", *numPtr1 + *numPtr2);

	free(numPtr1);
	free(numPtr2);

	return 0;
}
