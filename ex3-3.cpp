// ex3-3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char num;
	int age;
	double ta;
	printf("등번호를 입력하시오 :");
	scanf_s("%c", &num);
	printf("타율을 입력하시오 :");
	scanf_s("%lf", &ta);
	printf("나이를 입력하시오 :");
	scanf_s("%d", &age);
	printf("등번호는 %c번 타율은 %lf 나이는 %d살 입니다\n", num, ta, age);
    return 0;
}

