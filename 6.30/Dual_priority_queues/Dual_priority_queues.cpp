#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(vector<string> operations) {
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    map<int, int> counts;

    for (int i = 0; i < operations.size(); i++) {
        char command = operations[i][0];
        int number = stoi(operations[i].substr(2));
        if (command == 'I') {
            max_heap.push(number);
            min_heap.push(number);
            counts[number]++;
        } else if (command == 'D') {
            if (number == 1) {
                while (!max_heap.empty() && counts[max_heap.top()] == 0) {
                    max_heap.pop();
                }
                if (!max_heap.empty()) {
                    counts[max_heap.top()]--;
                    max_heap.pop();
                }
            } else if (number == -1) {
                while (!min_heap.empty() && counts[min_heap.top()] == 0) {
                    min_heap.pop();
                }
                if (!min_heap.empty()) {
                    counts[min_heap.top()]--;
                    min_heap.pop();
                }
            }
        }
    }
    while (!max_heap.empty() && counts[max_heap.top()] == 0)
        max_heap.pop();
    while (!min_heap.empty() && counts[min_heap.top()] == 0)
        min_heap.pop();
    if (max_heap.empty())
        return {0, 0};
    else
        return {max_heap.top(), min_heap.top()};
}

int main(){
    vector<string> operations = {"I 16", "I -5643", "D -1", "D 1", "D 1", "I 123", "D -1"};
    vector<int> answer = solution(operations);
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    cout << endl;
    return 0; 
}
