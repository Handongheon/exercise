// ex2-5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
/*몽룡이의 본봉은 160만원,보너스는 60만원 , 세금이 9%이다.
이때 월급은 얼마인가 (본봉-세금)
*/
#include "stdafx.h"


int main()
{
	int a, b;
	
	printf("본봉을 입력하시오");
	scanf_s("%d",&a);
	printf("보너스를 입력하시오");
	scanf_s("%d",&b);
	double c = (a + b)*0.09;
	printf("세금은 %lf\n",c);
	double d = a + b - c;
	printf("월급은 %lf\n",d);


    return 0;
}

