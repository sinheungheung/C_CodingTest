#include <string>
#include <vector>
#include <map>

using namespace std;


int solution(vector<int> topping) {
    int answer = 0;
    map<int, int> m1, m2; // ��, ����
    for (auto i : topping) m1[i]++; // ���� ���� ���� ����
    for (int i = 0; i < topping.size(); i++) {
        m2[topping[i]] ++;
        m1[topping[i]]--;
        // ���� �������� ���� ������
        if (m1[topping[i]] == 0) // ���λ���
            m1.erase(topping[i]);
        if (m1.size() == m2.size()) answer++;
    }

    return answer;
}