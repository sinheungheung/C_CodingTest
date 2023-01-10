#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // �� ���� �Լ� �������
#include <ctype.h>
#include <string.h>

int compare(const void* a, const void* b) {
    // void �����͸� int �����ͷ� ��ȯ -> ������
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2) return -1; // a < b ��� -1
    if (num1 > num2) return 1; // a > b ��� 1

    return 0;
}
int* solution(const char* my_string) {
    int n = strlen(my_string);
    int* answer = (char*)malloc(n * sizeof(int));
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (isdigit(my_string[i]))answer[j++] = my_string[i] - '0'; // '2' >> 2 (���ڰ� ���ڷ�)

    }
    int* arr = (int*)realloc(answer, sizeof(int) * j); // ���������
    qsort(answer, j, sizeof(int), compare); // �� ���� �ϴ� ��

    return answer; // a �� b�� ���� �� 0 ��ȯ
}