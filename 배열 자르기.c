#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int n = num2 - num1 + 1;
    int* answer = (int*)malloc(sizeof(int) * n);
    int  k = 0;
    for (int i = num1; i <= num2; i++) {
        answer[k] = numbers[i]; k++;
    }
    return answer;
}