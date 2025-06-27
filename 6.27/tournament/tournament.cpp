#include <iostream>

using namespace std;

int	solution(int n, int a, int b)
{
	int answer = -1;
	for (int i = 1; i < n; i++) {
	if ((a + 1) /2 == (b + 1) / 2)
		return i;
	a = (a + 1) / 2;
	b = (b + 1) / 2;
	}
	return answer;	
}
#include <stdio.h>
int	main(void)
{
	int i = solution(8,4,7);
	cout<<i<<endl;
	return 0;
}

