#include <string>
#include <vector>
#include <map>

using namespace std;


int solution(vector<int> topping) {
    int answer = 0;
    map<int, int> m1, m2; // 형, 동생
    for (auto i : topping) m1[i]++; // 토핑 종류 개수 저장
    for (int i = 0; i < topping.size(); i++) {
        m2[topping[i]] ++;
        m1[topping[i]]--;
        // 형이 동생한테 토핑 나눠줌
        if (m1[topping[i]] == 0) // 토핑삭제
            m1.erase(topping[i]);
        if (m1.size() == m2.size()) answer++;
    }

    return answer;
}