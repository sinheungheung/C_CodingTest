#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* id_pw[], size_t id_pw_len, const char*** db, size_t db_rows, size_t db_cols) {
    char* answer = (char*)malloc(10);
    char* id = id_pw[0]; // 로그인한 id
    char* pw = id_pw[1]; // 로그인한 pw
    int i;
    for (i = 0; i < db_rows; i++) { // 회원 목록에서 같은 id가 있는지 검사
        if (strcmp(id, db[i][0]) == 0) { // id 같은지 검사
            if (strcmp(pw, db[i][1]) == 0) strcpy(answer, "login"); // id가 같으면 pw 같은지 검사
            else strcpy(answer, "wrong pw"); // pw 오류인 경우
            break;
        }
    }
    if (i == db_rows)strcpy(answer, "fail");

    return answer;

}