#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h> // �ƽ�Ű�ڵ�
#include <string.h>

char* solution(const char* my_string) {
    int n = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (n + 1));

    for (int i = 0; my_string[i]; i++) {
        if (my_string[i] >= 'a' && my_string[i] <= 'z') answer[i] = my_string[i] - 32;
        else answer[i] = my_string[i] + 32;

    }
    answer[n] = '\0'; // �����Ⱚ �� ������(���ڿ� �� �˷��ֱ�)


    return answer;
}