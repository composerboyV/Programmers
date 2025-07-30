#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> freq;
    int day = discount.size();

    for (int i = 0; i < want.size(); i++)
        freq[want[i]] = number[i];

    for (int i = 0; i <= day - 10; i++) {
        map<string, int> window;
        for (int j = i; j < i + 10; j++)
            window[discount[j]]++;
        bool match = true;
        for (auto &p : freq)
            if (window[p.first] != p.second)
                match = false;
        if (match) answer++;
    }
    return answer;
}
