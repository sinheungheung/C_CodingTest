#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;
    int tos = 0;
    for (int i = 0; s[i]; i++) { // 문자열 읽기
        if (s[i] == '(') tos++; // 왼쪽 괄호부터 시작하면 c증가
        else {
            if (tos == 0) return false; // 바로 오른쪽 괄호로 시작할 경우
            else tos--; // 안쪽 괄호 후 오른쪽 괄호는 c감소(쌍 제거)
        }
    }
    answer = (tos == 0) ? true : false; // 괄호 쌍이 잘 맞으면 0이 됨
    return answer;
}