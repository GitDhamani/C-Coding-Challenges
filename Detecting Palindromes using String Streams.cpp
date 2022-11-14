#include <iostream>
#include <sstream>

int main()
{
    char ch;
    std::string num;
    std::cout<<"Enter Number: ";
    std::cin>>num;
    std::stringstream oss {num};
    oss >> ch;
    
    for(int i = num.size()-1; i >=0; i--, oss >> ch )     
    if (num[i] != ch) { std::cout<<"No Palindrome"; return 0; }
    std::cout<<"It is a Palindrome";
    
    return 0;
}