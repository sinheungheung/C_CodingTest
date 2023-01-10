#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    int num = order;
    while (num != 0) {
        if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9) answer++;
        num = num / 10;
    }
    return answer;
}