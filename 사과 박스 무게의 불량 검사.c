#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;
    for (int i = 0; i < boxes_len; i++)
        if (boxes[i] <= 540 && boxes[i] <= 660)
            answer++;
    return answer;
}
int main() {
    int weight = 600;
    int boxes[5] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}