#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // 퀵 정렬 함수 들어있음
#include <ctype.h>
#include <string.h>

int compare(const void* a, const void* b) {
    // void 포인터를 int 포인터로 변환 -> 역참조
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if (num1 < num2) return -1; // a < b 경우 -1
    if (num1 > num2) return 1; // a > b 경우 1

    return 0;
}
int* solution(const char* my_string) {
    int n = strlen(my_string);
    int* answer = (char*)malloc(n * sizeof(int));
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (isdigit(my_string[i]))answer[j++] = my_string[i] - '0'; // '2' >> 2 (문자가 숫자로)

    }
    int* arr = (int*)realloc(answer, sizeof(int) * j); // 사이즈수정
    qsort(answer, j, sizeof(int), compare); // 퀵 정렬 하는 법

    return answer; // a 와 b가 같을 때 0 변환
}