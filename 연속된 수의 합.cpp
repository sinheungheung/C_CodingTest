#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int mid = total / num; // �߰���
    int first = 0;

    // ù��° �� ã�� = �߰� ������ ��ü ������ �� ������
    if (num % 2 == 0) first = mid - (num / 2 - 1);
    else first = mid - (num / 2);

    for (int i = 0; i < num; i++, first++) {
        answer.push_back(first);
    }
    return answer;
}