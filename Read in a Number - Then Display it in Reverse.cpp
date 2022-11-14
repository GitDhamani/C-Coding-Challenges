#include <iostream>

/*
Read in a number and then store the reverse of it in a variable and display it.
*/

int main()
{
    std::cout<<"Please enter in a number to be reversed: ";
    
    int i{};
    std::cin>>i;
    
    int reversed{};
    
    while (i>0)
    {
    reversed = reversed*10 + i%10;
    i /=10;    
    }
    
    std::cout<<"Reversed: "<<reversed;
    
    return 0;
}