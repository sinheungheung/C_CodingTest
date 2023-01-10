#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int mid = total / num; // 중간값
    int first = 0;

    // 첫번째 값 찾기 = 중간 값에서 전체 개수의 반 앞으로
    if (num % 2 == 0) first = mid - (num / 2 - 1);
    else first = mid - (num / 2);

    for (int i = 0; i < num; i++, first++) {
        answer.push_back(first);
    }
    return answer;
}