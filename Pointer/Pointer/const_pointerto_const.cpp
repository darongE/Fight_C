#include <stdio.h>

int main()
{
	const int num1 = 10;
	const int num2 = 30;
	const int * const numPtr = &num1;    // int형 상수를 가리키는
										 //포인터 상수
								// int const * const numPtr 같음
	*numPtr = 50;				// 에러 : num1은 상수, 역참조로 값 변경 않됨				
	numPtr = &num2;				// 에러 : 포인터(메모리 주소)를 변경 않됨

	/*
	constant pointer to constant : 메모리 주소도 변경 않되고 
								   메모리 주소에 저장된 값도 변경않됨
	
	*/
	return 0;
}