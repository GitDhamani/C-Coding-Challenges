#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void Display(const std::vector<T>& v)
{
    std::cout<<"[ ";
    for (auto element: v)
    std::cout<<element<<" ";
    
    std::cout<<"]"<<std::endl;
}

int main()
{
    //A Vector of Integers
    std::vector<int> vec1 (10, 100); //Use the Overloaded Constructor to make ten 100s.
    Display(vec1);
    
    //A Vector of Chars
    std::vector<char> vec2 (10, 'A'); //Use the Overloaded Constructor to make ten A's.
    Display(vec2);
   
    return 0;
}