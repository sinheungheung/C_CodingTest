#include <stdio.h>
display(int su, char ch)
{
	for (int i = 1; i <= su; i++)
		printf("%c", ch);
}
 // 2�� ������� �ƴ����� �Ǻ��ϴ� �Լ�
int isEven(int n)
{
	return(n % 2 == 0 ? 1 : 0);
}

int main(void)
{
	display(20,'#');
	if (isEven(10) == 1)
		printf("\n¦���Դϴ�.");
	else
		printf("\nȦ���Դϴ�.");
	return 0;
}

 