#include <iostream>
#include <vector>
#include <string>

void	dfs(int current_computer, int n, const vector<vector<int>>& computers, vector<bool>& visited) {
	visited[current_computer] = true;

	for (int i = 0; i < n; i++) {
		if (computers[current_computer][i] == 1 && !visited[i]) {
			dfs(i, n, computers, visited);
		}
	}
}


using namespace	std;

int	solution(int n, vector<vector<int>> computers) {
	int	answer = 0;
	vector<bool>visited(n, false);
	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			answer++;
			dfs(i, n, computers, visited);
	}
	}
	return answer;
}

