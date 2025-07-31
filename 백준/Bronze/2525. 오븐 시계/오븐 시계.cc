#include<iostream>


using namespace std;

int   main()
{
      int a, b, c, d;

      cin>>a;
      cin>>b;
      cin>>c;
      d = b + c;
      if (d < 60) {
            cout<<a<<" "<<d<<endl;
            return (0);
      }
      while (d >= 60) {
            a++;
            d -=60;
      }
      while (a > 23)
            a -= 24;
      cout<<a<<" "<<d<<endl;
      
      return (0);
}