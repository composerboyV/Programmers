#include <iostream>
using namespace std;

int solution(int n)
{
    
    int ans = 0;
    int i = 0;
    for (i = n; i != 0;) {
        if (i % 2 == 0)
            i = i / 2;
        else {
            i = i - 1;
            ans++;
        }
    }
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    return ans;
}
