#include <stdio.h>
int main()
{
	int num = 10;
	char c = 'z';
	int *numPtr = &num;
	char *cPtr = &c;

	void *ptr;		 //void ������ = ���� ������ 
	                // �پ��� �ڷ��� �����͸� ���� ���� 

	//ptr = numPtr;
	//printf("%d", *ptr);    //���� : ������ �ʵ�

	//ptr = cPtr;
	//printf("%c", *ptr);	  //���� : ������ �ʵ�	

	void v1;				 //���� 



//	numPtr = ptr;    //int �����Ϳ� void ������ ����   [X]
//	cPtr = ptr;		 // char �����Ϳ� void ������ ���� [X]


	return 0;
}