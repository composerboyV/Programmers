#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int   main()
{
      int i;
      cin >> i;
      string line;
      int count = 0 , x;
      getline(cin >> ws, line);
      int target;
      cin>>target;
      istringstream iss(line);
      // cout<<"target is "<<target<<endl;
      // cout<<"line is "<<line<<endl;
      for (int j = 0; j < i; j++) {
      while (iss >> x) {
            if (x == target)
                  count++;
      }
      }
      cout<<count<<endl;
      return (0);
}
