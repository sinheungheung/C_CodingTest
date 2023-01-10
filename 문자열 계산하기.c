#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string) {
    int answer = 0;
    char* temp = strtok(my_string, " "); // 공백으로 구분
    answer += atoi(temp);
    char op; int number;

    while (temp != NULL) {
        if (strcmp(temp, "+") == 0) {
            temp = strtok(NULL, " ");
            answer += atoi(temp);
        }
        else if (strcmp(temp, "-") == 0) {
            temp = strtok(NULL, " ");
            answer -= atoi(temp);
        }

        else temp = strtok(NULL, " ");
    }
    return answer;
}