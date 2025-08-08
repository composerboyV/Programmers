#include <iostream>

using namespace std;

int zero[41], one[41];

void prepare() {
    zero[0] = 1; one[0] = 0;
    zero[1] = 0; one[1] = 1;
    for (int i = 2; i <= 40; i++) {
        zero[i] = zero[i-1] + zero[i-2];
        one[i] = one[i-1] + one[i-2];
    }
}

int main() {
    int count, test_int;
    cin >> count;
    prepare();
    for (int j = 0; j < count; j++) {
        cin >> test_int;
        cout << zero[test_int] << " " << one[test_int] << endl;
    }
    return 0;
}
