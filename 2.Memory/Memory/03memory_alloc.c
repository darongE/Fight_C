#include <stdio.h>
#include <stdlib.h>   //malloc, free �Լ��� ����� �������
#include <string.h>   //memset �Լ��� ����� ������� 

int main()
{
	char *cPtr = malloc(sizeof(char));
	memset(cPtr, 0, sizeof(char));     // char�� ũ�⸦ 1byte ��ŭ 0���� ����


	//memset(cPtr, 0, sizeof(char*));    //32bit : char ������ ũ�� 4����Ʈ��ŭ
									     //0���� ����
										 //64bit : char ������ ũ�� 8����Ʈ��ŭ
									     //0���� ����

	free(cPtr);

	return 0;
}