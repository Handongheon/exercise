// ex2-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b, c;
		printf("정수를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	 c = a + b;
	printf("두정수의 합은 :%d \n", c);
    return 0;
}

