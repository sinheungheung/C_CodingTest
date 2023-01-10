#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h> // 아스키코드
#include <string.h>

char* solution(const char* my_string) {
    int n = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (n + 1));

    for (int i = 0; my_string[i]; i++) {
        if (my_string[i] >= 'a' && my_string[i] <= 'z') answer[i] = my_string[i] - 32;
        else answer[i] = my_string[i] + 32;

    }
    answer[n] = '\0'; // 쓰레기값 안 나오게(문자열 끝 알려주기)


    return answer;
}