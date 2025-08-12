#include <iostream>
#include <bits/stdc++.h>


using namespace std;
int   main()
{
      int a, b, c;
      ios::sync_with_stdio(false);
       cin.tie(nullptr);

      cin>>a;
      for (int i = 0; i < a; i++) {
            cin>>b;
            cin>>c;
            cout<<b + c<<'\n';
      }
      return (0);
}