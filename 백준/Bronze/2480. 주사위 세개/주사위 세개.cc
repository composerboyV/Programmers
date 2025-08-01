#include <iostream>


using namespace std;

int   main()
{
      
      int a, b, c;
      int answer = 0;
      cin>>a;
      cin>>b;
      cin>>c;
      if (a == b && b == c) {
            answer = a;
            answer *= 1000;
            answer += 10000;
            cout<<answer<<endl;
            return (0);
      }
      if (a == b)  
            answer = 1000 + (a * 100);
      else if (b == c)
            answer = 1000 + (b * 100);
      else if (a == c)
            answer = 1000 + (c * 100);
      else {
            if (a > b && a > c)
                  answer = a * 100;
            else if ( b > a && b > c)
                  answer = b * 100;
            else 
                  answer = c * 100;
      }
      cout<<answer<<endl;
      return (0);
}

