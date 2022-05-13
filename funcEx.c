#include <stdio.h>

int main(void)
{
	display(20,'#');
	
	return 0;
}

 display(int su, char ch)
{
	for (int i = 1; i <= su; i++)
	printf("%c",ch);
		
}