#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int is_in(char answer[], int size, int ch) {
    for (int i = 0; i < size; i++)
        if (answer[i] == ch) return 1; // 문자가 존재하면 true
    return 0;
}
char* solution(const char* my_string) {
    char* answer = (char*)malloc(strlen(my_string) * sizeof(char) + 1);
    int j = 0;
    for (int i = 0; my_string[i]; i++) {
        if (is_in(answer, strlen(answer), my_string[i]) == 0)
            answer[j++] = my_string[i];
    }
    answer[j] = '\0'; // 쓰레기값 안 들어가도록
    return answer;
}