#include <iostream>

using namespace std;

int   main()
{
      int i , result;
      result = 0;
      i = 0;
      cin>> i;
      for(int j = 1; j <= i; j++)  {
            result += j;            
      }
      cout<<result<<endl;
      return (0);
}