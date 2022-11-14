#include <iostream>
#include <iomanip>

int main()
{
    const int w = 5;
    int a{};
    
    for (int x=0; x<=10; x++)
    {
        std::cout<<((x<10)? "0":"")<<x<<"|";
        for (int i: {1,1,2,3,4,5,6,7,8,9,10})
        {
          if (x == 0) {a = 1;}
          if (i*x <10 && i != 10) std::cout<<std::setw(w-1)<<std::right<<"0"<<i*(x+a);        
          else std::cout<<std::setw(w)<<std::right<<i*(x+a);
          a = 0;
        }
        if (x ==0)
        std::cout<<std::endl<<std::setfill('-')<<std::setw(12*w-2)<<""<<std::setfill(' ');
        std::cout<<std::endl;
    }
    return 0;
}