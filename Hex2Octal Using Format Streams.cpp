#include <iostream>

/*
Objective: Write a program to display entered in numbers as Hex and Octal.
*/

int main()
{
    int x{};
    std::cout<<"Please enter in a number to convert: ";
    std::cin>>x;
    std::cout<<"In Hex this is: "<<std::hex<<x<<std::endl;
    std::cout<<"In Oct this is: "<<std::oct<<x<<std::endl;
    return 0;
}