#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> vec {"th", "st", "nd", "rd", "th", "th", "th", "th", "th", "th"};
    for (int i=1; i<=31; i++)
    if (i > 10 && i < 14)
    std::cout<<i<<"th ";
    else
    std::cout<<i<<(vec[i%10])<<" ";
    return 0;
}