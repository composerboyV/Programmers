#include <iostream>


int   main()
{
      while(1) 
      {
            int d,e,b ;
            if (!(std::cin>>d))
                  break ;
            if (!(std::cin>>e))
                  break ;
            b = d + e;
            std::cout<<b<<std::endl;
      }
      return (0);
}