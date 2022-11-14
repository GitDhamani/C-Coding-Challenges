#include <iostream>
#include <vector>

/*
Objective: Write a program that takes in an integer (max 255) and converts it to hex. Use Vectors to convert the alphabet digits.
*/

void PrintHex(int num)
{
    std::vector<char> Alpha {'A','B','C','D','E','F'};
    std::vector<int> number {10, 11, 12, 13, 14, 15};
    std::vector<int> Digits;
    
    int Digit1 = num/16;
    int Digit2 = num%16;
    
    Digits.push_back(Digit1);
    Digits.push_back(Digit2);
    
    for (auto element: Digits)
    {
        if (element>9)
        {
            for (int i = 0; i<sizeof(number)/sizeof(number[0]); i++)
            if (number[i] == element)
            std::cout<<Alpha[i];
        }
        else std::cout<<element;
    } 
}

int main()
{ 
    int x{};
    std::cout<<"Please enter in a number to convert: ";
    std::cin>>x;
    
    PrintHex(x);
    
    return 0;
}