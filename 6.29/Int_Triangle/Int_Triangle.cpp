#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    for (int i = 1; i < triangle.size(); i++) {
        for(int j = 0; j < triangle[i].size(); j++) {
            if ( j == 0) {
                triangle[i][j] += triangle[i - 1][j];
            }
            else if (j == triangle[i].size() - 1)
                triangle[i][j] += triangle[i - 1][j - 1];
            else {
                if (triangle[i - 1][j - 1] >= triangle[i - 1][j])
                        triangle[i][j] += triangle[i - 1][j - 1];
                else 
                        triangle[i][j] += triangle[i - 1][j];
            }
            //DP점화식
            //맨 왼쪽칸이면 0
            //오른쪽이면 j == triangle[i].size() - 1;
            //중간칸일경우
        }
        
        for (int num : triangle.back()) {
            if (num > answer)
                answer = num;
        }
    }
    return answer;    
}
#include <iostream>

int	main(void)
{
	vector<vector<int>> triangle = {{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}};
	int i = 0;
	i = solution(triangle);
	cout<<i<<endl;
	return (0);
}
