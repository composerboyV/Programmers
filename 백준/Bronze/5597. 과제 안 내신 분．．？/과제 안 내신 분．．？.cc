#include <bits/stdc++.h>
using namespace std;

int main() {
    int v[30];
    for (int i = 0; i < 28; i++)
        v[i] = 0;
    for(int i = 0; i < 28; i++)
    {
        int count;
        cin>>count;
        v[count] = 1;
    }
    int target1 = 0;
    int target2 = 0;
    for (int i = 1; i <= 30; i++)
    {
        if (v[i] != 1 && target1 == 0)
            target1 = i;
        else if (v[i] != 1)
            target2 = i;
    }
    cout<<target1<<endl;
    cout<<target2<<endl;
    return 0;
}
