#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �ֺ�: �� �߿��� ���� ���� ������ ��

int solution(int array[], size_t array_len) {
    int answer = 0; // �ֺ�
    // [�ߺ� ������ ����]
    // int data[array_len];
    // data[0] = array[0]; int data_len = 1;
    // for(int i = 1; i < array_len; i++){ // �ߺ� ������ ����
    //     int j;
    //     for(j = 0; j < data_len; j++)
    //         if(array[i] == data[j])break;
    //     if(j == data_len) data[data_len++]=array[i];
    // }
    int max = 0;
    for (int i = 0; i < array_len; i++) { // �ֺ� ���
        int count = 0;
        for (int j = i; j < array_len; j++) { // data�� array�� �� �� �ִ���
            if (array[i] == array[j]) count++;
        }
        if (max == count)answer = -1;
        else if (max < count) {
            max = count;
            answer = array[i];
        }
    }
    return answer;
}