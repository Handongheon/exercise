// ex3-1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
/* 기본요금 660원, kw당 요금 88.5원, 전체요금=기본요금 + (사용량*88.5),
세금 전체요금*00.9, 납부금액 =전체요금+세금
*/

#include "stdafx.h"


int main()
{
	int a ;
	int x = 660;
	
	printf("사용량을 입력하시오 :\n");
	scanf_s("%d",&a);
	double b = a * 88.5;
	printf("추가요금은 :%lf\n",b);
	double c = x + b;
	printf("전체요금은 :%lf\n",c);
	double d = c * 0.09;
	printf("세금은 :%lf\n",d);
	double e = c + d;
	printf("납부금액은 :%lf\n", e);
    return 0;
}

