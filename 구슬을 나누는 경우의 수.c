#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    int answer = 0;
    double up = 1; // ����
    double down = 1; // �и�
    for (int i = 0; i < share; i++) {
        up = up * (balls - i);
        down = down * (share - i);
    }
    answer = up / down;

    return answer;
}