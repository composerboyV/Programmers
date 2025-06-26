#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    set<string> usedwords;
    for (int wordindex = 0; wordindex < words.size(); wordindex++){
    int currentplayer = wordindex % n;//0부터시작해 플레이어인덱스 확인하는 로직!!!
    int turnplayer = (wordindex / n) + 1;//현재차례
    string  currentword = words[wordindex];
        
    if (currentword.length() < 2) {
        answer.push_back(currentplayer + 1);
        answer.push_back(turnplayer);
        return answer;
    }
    if (usedwords.find(currentword) != usedwords.end()) {
        answer.push_back(currentplayer + 1);
        answer.push_back(turnplayer);
        return answer;
    }
    if (wordindex > 0) {
        string prevword = words[wordindex - 1];
    if (prevword.back() != currentword[0]) {
        answer.push_back(currentplayer + 1);
        answer.push_back(turnplayer);
        return answer;
    }
    }
    usedwords.insert(currentword);
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다. 
    cout << "Hello Cpp" << endl;
    return {0, 0};
}

