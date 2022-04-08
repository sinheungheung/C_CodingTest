#include<stdio.h>

int main(void)
{
	char ch = '9';
	int number = ch - 48;
	int n = 9;

	printf("문자: %c, 수: %d, 수: %d\n", ch, number, n);
	//문자: 9, 수: 9, 수: 9

	ch = ch + 1;
	number = number + 1;
	n = n + 1;

	printf("문자: %c, 수: %d, 수: %d\n", ch, number, n);
	//문자: :, 수: 10, 수: 10

	ch = ch + '1'; //'1'이 아스키 코드 49
	number = number + '1';
	n = n + '1';

	printf("문자: %c, 수: %d, 수: %d\n", ch, number, n);
	//문자: K, 수: 59, 수: 59
	return 0;
}
