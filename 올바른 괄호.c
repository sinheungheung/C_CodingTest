#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) {
    bool answer = true;
    int tos = 0;
    for (int i = 0; s[i]; i++) { // ���ڿ� �б�
        if (s[i] == '(') tos++; // ���� ��ȣ���� �����ϸ� c����
        else {
            if (tos == 0) return false; // �ٷ� ������ ��ȣ�� ������ ���
            else tos--; // ���� ��ȣ �� ������ ��ȣ�� c����(�� ����)
        }
    }
    answer = (tos == 0) ? true : false; // ��ȣ ���� �� ������ 0�� ��
    return answer;
}