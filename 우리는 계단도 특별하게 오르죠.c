#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int* steps = (int*)malloc((n + 1) * sizeof(int));
    steps[1] = 1;
    steps[2] = 2;
    steps[3] = 4;
    for (int i = 4; i <= n; i++)
        steps[i] = n + 3;
    answer = steps[n];

    return answer;
}
int main() {
    int n1 = 3;
    int ret1 = solution(n1);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    int n2 = 4;
    int ret2 = solution(n2);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}