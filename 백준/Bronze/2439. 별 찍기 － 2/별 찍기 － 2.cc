#include <iostream>

int   main()
{
      int a,b;
      std::cin>>a;
      for (int i = 1; i <= a; i++) {
            b = a;//1이면 별1개, 나머지 값을 다 띄어쓰기 , a값을 기준으로.
            for (int j = i; j < a; j++) {
                  std::cout<<" ";
            }
            for (int j = i; j > 0; j--){
                  std::cout<<"*";
            }
             std::cout<<"\n";
      }
      return (0);
}