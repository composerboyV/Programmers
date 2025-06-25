#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    if (n == 1)
        return n;
    if (n == 2)
        return n;
    long long prev2 = 1;//f(1)
    long long prev1 = 2;//f(2)
    for (int i = 3; i <= n; i++) {
        answer = (prev1 + prev2) % 1234567;//%1234567 을 넣으면 오버플로우 방지효과!
        prev2 = prev1;
        prev1 = answer;
    }
    return answer;
}
