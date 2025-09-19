#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
      string first_line;
      getline(cin, first_line);
      istringstream head(first_line);
      int N;
      head >> N;
      
      string line;
      getline(cin, line);
      istringstream nums(line);
      
      int a;
      int min_val = INT_MAX;
      int max_val = INT_MIN;
      
      while (nums >> a) {
            if (a < min_val) min_val = a;
            if (a > max_val) max_val = a;
      }
      
      cout << min_val << " " << max_val;
      
      return (0);
}