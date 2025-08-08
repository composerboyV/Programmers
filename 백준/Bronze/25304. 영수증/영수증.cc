#include <iostream>

using namespace std;

int   main()
{
      int result, line, prize,count;
      int i= 0;
      cin>> result;
      cin>>line;
      for(int j = 0; j < line; j++)  {
            cin>>prize;
            cin>>count;
            i +=prize * count;
      }
      if (i == result)
            cout<<"Yes"<<endl;
      else
            cout<<"No"<<endl;
      return (0);
}