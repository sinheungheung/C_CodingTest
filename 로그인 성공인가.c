#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* id_pw[], size_t id_pw_len, const char*** db, size_t db_rows, size_t db_cols) {
    char* answer = (char*)malloc(10);
    char* id = id_pw[0]; // �α����� id
    char* pw = id_pw[1]; // �α����� pw
    int i;
    for (i = 0; i < db_rows; i++) { // ȸ�� ��Ͽ��� ���� id�� �ִ��� �˻�
        if (strcmp(id, db[i][0]) == 0) { // id ������ �˻�
            if (strcmp(pw, db[i][1]) == 0) strcpy(answer, "login"); // id�� ������ pw ������ �˻�
            else strcpy(answer, "wrong pw"); // pw ������ ���
            break;
        }
    }
    if (i == db_rows)strcpy(answer, "fail");

    return answer;

}