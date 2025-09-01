#include <iostream>

int   main()
{
      int a,b;
      std::cin>>a;
      for (int i = 0; i <= a; i++) {
            b = i;
            for (int j = 0; j < b; j++)
                  std::cout<<"*";
            if (i != 0)
                  std::cout<<"\n";
      }
      return (0);
}