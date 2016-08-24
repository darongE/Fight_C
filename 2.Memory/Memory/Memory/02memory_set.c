#include <stdio.h>
#include <stdlib.h>   //malloc, free �Լ��� ����� �������
#include <string.h>   //memset �Լ��� ����� ������� 

int main()
{
	long long *numPtr = malloc(sizeof(long long));
	
	memset(numPtr, 0x27, 8);		// long long = 8byte �޸� �����Ҵ� 

	printf("0x%llx\n", *numPtr);  //0x2727272727272727


	//memset(numPtr, 0, 8);  numPtr�� ����Ű�� �޸𸮸� 8����Ʈ ��ŭ
	//0���� ����

	/*
	  memset(numPtr, 0, sizeof(long long));   numPtr�� ����Ű�� �޸𸮸� 0���� �ʱ�ȭ 

		
	 memset(numPtr, 0, sizeof(long long *));
      // 32��Ʈ: long long �������� ũ�� 4����Ʈ��ŭ 0���� ����(�߸��� ���)
      // 64��Ʈ: long long �������� ũ�� 8����Ʈ��ŭ 0���� ����(�߸��� ���)

	*/





	//printf("Trying to print 'long long' type"
	//	"\n - by L:  %L"
	//	"\n - by LL: %LL"
	//	"\n - by q:  %q"
	//	"\n - by ll: %ll"
	//	"\n - by dll: %dll"
	//	"\n - by d:  %d"
	//	"\n - bi i:  %i\n", llr + 1LL, llr + 2LL, llr + 3LL, llr + 4LL, llr + 5LL, llr + 6LL, llr + 7LL);
	//printf("binary for -558038695: %s\n", b_prn(-558038695, sizeof(int)));


	free(numPtr);

	return 0;
}