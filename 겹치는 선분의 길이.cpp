#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(int a, int b) {
    return a < b;
}
int solution(vector<vector<int>> lines) {
    int answer = 0;
    map<pair<int, int>, int>m;
    for (auto& i : lines) {
        sort(i.begin(), i.end(), cmp);
    }
    for (auto& i : lines) {
        for (int j = i[0]; j < i[1]; j++) m[make_pair(j, j + 1)]++;
    }
    for (auto& i : m) {
        if (i.second >= 2) answer++;
    }
    return answer;
}