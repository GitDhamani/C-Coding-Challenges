#include <iostream>

int main()
{
    int num{};
    std::cout<<"Enter in a Number: ";
    std::cin>>num;
    
    std::cout<<"In Hex, this is: "<<std::hex<<num;
    
    return 0;
}