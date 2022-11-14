#include <iostream>
#include <map>

/*
Objective: Write a program that takes in an integer (max 255) and converts it to hex. Use a Map.
*/

int main()
{
    int num {};
    std::cout<<"Please Enter in a Number: ";
    std::cin>>num;
    
    int digit3;    
    int digit2;
    int digit1;    
    
    digit3 = num/256;
    num = num%256;
    digit2 = num/16;
    digit1 = num%16;
    
    std::cout<<"In Hex This is: ";
        
    std::map<int, char> m {{10,'A'}, {11,'B'}, {12,'C'}, {13,'D'}, {14,'E'}, {15,'F'}};
    auto it = m.find(digit3);
    
    if (it!=m.end())
    std::cout<<it->second;
    else if (digit3 > 0)
    std::cout<<digit3;    
    
    it = m.find(digit2);    
    if (it!=m.end())
    std::cout<<it->second;
    else if ((digit2 > 0) || (digit3 > 0))
    std::cout<<digit2;
   
    it = m.find(digit1);
    if (it!=m.end())
    std::cout<<it->second;
    else
    std::cout<<digit1; 
    
    return 0;
}