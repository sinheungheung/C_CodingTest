#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(char* password) {
    int length = strlen(password);
    for (int i = 0; i < length - 2; ++i) {
        int firstCheck = password[i + 1] - password[i];
        int secondCheck = password[i] - password[i - 1];
        if (firstCheck == secondCheck && (firstCheck == 1 || firstCheck == -1))
            return false;
    }
    return true;
}
int main() {
    char* password1 = "cospro890";
    bool ret1 = solution(password1);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1 == true ? "true" : "false");

    char* password2 = "cba323";
    bool ret2 = solution(password2);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2 == true ? "true" : "false");
}
