#include <stdio.h>
display(int su, char ch)
{
	for (int i = 1; i <= su; i++)
		printf("%c", ch);
}
 // 2의 배수인지 아닌지를 판별하는 함수
int isEven(int n)
{
	return(n % 2 == 0 ? 1 : 0);
}

int main(void)
{
	display(20,'#');
	if (isEven(10) == 1)
		printf("\n짝수입니다.");
	else
		printf("\n홀수입니다.");
	return 0;
}

 