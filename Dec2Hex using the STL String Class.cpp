#include <iostream>
#include <string>

int main()
{
    std::string Cypher {"0123456789ABCDEF"};
    
    int d{};
    std::cout<<"Please enter in a value to convert: ";
    std::cin>>d;
        
    int digit1 = d/16;
    int digit2 = d%16;
    
    std::cout<<Cypher[digit1];
    std::cout<<Cypher[digit2];
    
    return 0;
}