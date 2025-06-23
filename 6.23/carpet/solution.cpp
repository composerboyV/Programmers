#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int temp = 0;
    int i;
    int start = (int)sqrt(yellow); 
for (i = start; i >= 1; i--) {
    if (yellow % i == 0) {
        temp = yellow / i;
        int width = temp + 2;
        int height = i + 2;
        if (width * height - yellow == brown)
            break ;
    } 
}
    if (temp + 2 < i + 2) {
    answer.push_back(i + 2);
    answer.push_back(temp + 2);
    }
    answer.push_back(temp + 2);
    answer.push_back(i + 2);
    return answer;
}
