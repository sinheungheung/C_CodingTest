#include<stdio.h>

int main(void) {
	char s1[20] = {"coding test"};
	char s2[20];
	int i, j;
	int cnt = 0;


	while (s1[cnt] != '\0')
			
		cnt++;
		
	//printf("문자열의 길이:%d\n", cnt);
	for (int i = 0; i < 20; i++) {
		
		s2[i] = s1[i];
		if (s1[i] == '0') break;
	}
	s2[i] = 0;
	//printf("문자열의 길이:%d\n", cnt);
	printf("복사본: %s", s2);
		
	
	}
