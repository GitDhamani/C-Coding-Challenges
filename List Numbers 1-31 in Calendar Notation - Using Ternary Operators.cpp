#include <iostream>

/*
Objective: Write a program to display numbers 1 - 31 which displays the st, nd, rd and th post fixes.
*/

int main()
{
    for (int i = 1; i<=31; i++)
    std::cout<<i
    <<((i%10 == 1 && i!=11) ? "st":"")
    <<((i%10 == 2 && i!=12) ? "nd":"")
    <<((i%10 == 3 && i!=13) ? "rd":"")
    <<(((i>3 && i<21) || (i>23 && i<31)) ? "th":"")
    <<" ";
    
    std::cout<<std::endl;
    return 0;
}