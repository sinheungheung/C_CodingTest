#include<stdio.h>

int main(void)
{
	int i, j;
	for (int i = 1; i <=9; i++) {
		for (int j = 2; j <=9; j++) {
			printf("%d X %d =%d\t",j,i,i*j);
		}
		printf("\n");
	}
}