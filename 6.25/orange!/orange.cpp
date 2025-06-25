#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>  // main 함수를 위해 추가
using namespace std;

int solution(int k, vector<int> tangerine) {
	unordered_map<int, int> freq;
	vector<int> counts;

	for (int size : tangerine)
		freq[size]++;
	for (auto& pair : freq)
	   counts.push_back(pair.second);
	sort(counts.rbegin(), counts.rend());
	int selected = 0;
	int types = 0;
	for (int count : counts) {
	selected += count;
	types++;
	if (selected >= k)
	       break;
	}    
	return types;
}

int main() {
   
	vector<int> tangerine1 = {1, 3, 2, 5, 4, 5, 2, 3};
	int k1 = 6;
	cout << "테스트 1: k=" << k1 << ", 결과=" << solution(k1, tangerine1) << endl;
	cout << "예상 답: 3" << endl << endl;
	
	vector<int> tangerine2 = {1, 1, 1, 1, 2, 2, 2, 3, 3};
     	int k2 = 6;
     	cout << "테스트 2: k=" << k2 << ", 결과=" << solution(k2, tangerine2) << endl;
	cout << "예상 답: 2 (크기 1을 4개, 크기 2를 2개)" << endl << endl;
	vector<int> tangerine3 = {1, 2, 3, 4, 5};
	int k3 = 3;
	cout << "테스트 3: k=" << k3 << ", 결과=" << solution(k3, tangerine3) << endl;
	cout << "예상 답: 3 (아무거나 3개)" << endl << endl; 
	vector<int> tangerine4 = {5, 5, 5, 5, 5, 5, 5};
	int k4 = 4;
	cout << "테스트 4: k=" << k4 << ", 결과=" << solution(k4, tangerine4) << endl;
	cout << "예상 답: 1 (모두 같은 크기)" << endl << endl;
     	return 0;
}
