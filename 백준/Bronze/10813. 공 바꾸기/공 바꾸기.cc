#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; 
    if (!(cin >> N >> M)) return 0;

    vector<int> a(N + 1);
    for (int i = 1; i <= N; ++i) a[i] = i;

    while (M--) {
        int i, j; 
        cin >> i >> j;
        swap(a[i], a[j]);
    }

    for (int i = 1; i <= N; ++i) {
        if (i > 1) cout << ' ';
        cout << a[i];
    }
    cout << '\n';
    return 0;
}
