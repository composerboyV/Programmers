#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int elements_len = elements.size();
    set<int> result;
    for (int i = 1; i <= elements_len; i ++) {
        for (int j = 0; j < elements_len; j++) {
            int temp = 0;   
            for(int k = 0; k < i; k++)
                 temp += elements[(j + k) % elements_len];
            result.insert(temp);
        }
    }
    answer = result.size();
    return answer;
}