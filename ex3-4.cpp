// ex3-4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int his, lit, art;
	printf("역사,문학,예능 점수를 입력하시오 :");
	scanf_s("%d,%d,%d", &his, &lit, &art);
	printf("과목의 평균은 :%lf", (his + lit + art) / 3.0);

    return 0;
}

