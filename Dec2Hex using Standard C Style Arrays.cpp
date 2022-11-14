#include <iostream>

void convert2hex(int num)
{
    if (num>255 || num<0)
    {
    std::cout<<"Number not in Range.";
    return;
    }
    
    int digit1{};
    int digit2{};
    
    digit1 = num/16;
    digit2 = num % 16;
    
    char hexarray [] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int numarray[] = {10, 11, 12, 13, 14, 15};
    
    std::cout<<"In Hex, this is: ";
    
    if (digit1>9)
    {
    for (int i{0}; i<6; i++)
    if (numarray[i] == digit1)
    std::cout<<hexarray[i];
    }
    else if (digit1 != 0)
    std::cout<<digit1;
    
    if (digit2>9)
    {
    for (int i{0}; i<6; i++)
    if (numarray[i] == digit2)
    std::cout<<hexarray[i];
    }
    else 
    std::cout<<digit2;
    
    std::cout<<std::endl;
}

int main()
{
    int num{};
    std::cout<<"Enter in a Number from 0 - 255: ";
    std::cin>>num;
    
    convert2hex(num);    
        
    return 0;
}