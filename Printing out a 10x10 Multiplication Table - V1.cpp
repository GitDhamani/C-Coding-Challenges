#include <iostream>
#include <iomanip>

int main()
{
    int w = 4;
    
    //Draw Top line
    for (int i=0; i<=10; i++)
    std::cout<<((i<10)? "0":"")<<i<<std::setw(w-1)<<std::left<<((i==0)?"|":"");
    
    //Draw Underline
    std::cout<<std::endl<<std::setfill('-')<<std::setw(13*w)<<""<<std::setfill(' ')<<std::endl;

    //Draw Table Line by Line    
    for (int i=1; i<=10; i++, w = 4)
    {
        std::cout<<((i<10)? "0":"")<<i<<"|";
        for (int j=1; j<=10; j++)
        std::cout<<((j>1)? std::setw(w+1):std::setw(w))<<std::right<<i*j;
    std::cout<<std::endl;
    }
    
    return 0;
}