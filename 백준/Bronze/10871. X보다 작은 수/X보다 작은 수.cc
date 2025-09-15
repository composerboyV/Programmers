#include <iostream>
#include <string>
#include <fstream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int   main()
{
      string first_line;
      getline(cin, first_line);
      istringstream head(first_line);
      int N,X;
      head >> N >> X;
      
      string line;
      getline(cin, line);
      istringstream nums(line);
      stack<int> _stack;
      int a;
      while (nums >> a) {
            if (a < X) _stack.push(a);
      }
      stack<int> _stack_reverse;
      while (!_stack.empty()){
            _stack_reverse.push(_stack.top());
            _stack.pop();
      }
      // _stack.swap(_stack_reverse);
      while (!_stack_reverse.empty()) {
            cout <<_stack_reverse.top();
            _stack_reverse.pop();
            if (!_stack_reverse.empty())
                  cout<< " ";
      }
      return (0);
}
