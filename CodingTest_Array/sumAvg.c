#include <time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int i, sum = 0;
	int arr[10];
	double avg;
	srand(time(NULL));

	for (i = 0; i < sizeof(arr)/sizeof(int); i++) {
		arr[i] = (rand() % 100) + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
	for (i = 0; i < 10; i++) {
		sum = sum + arr[i];
	}
	avg = (double)sum / 10;
	printf("\n");
	printf("합계는: %d", sum);
	printf("평균은: %lf", avg);

	return 0;
	}
