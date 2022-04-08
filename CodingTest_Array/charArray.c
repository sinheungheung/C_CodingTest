#include<stdio.h>
int main(void)
{ 
		char color[5][10] = {"red","green","blue","brown","cyan"};
		int i, j;

		for (int i = 0; i < 5; i++) 
		{
			printf("%s\n", color[i]);
		
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 10; j++) {
				printf("%c", color[i][j]);
			}
			
		}	

	return 0;
}