#include <iostream>
#include <vector>

void Display(const std::vector<int> &v)
{
    for (auto element: v)
    std::cout<<element<<" ";
    std::cout<<std::endl;
}

int main()
{   
    std::vector<int> vec1 {1,2,3,4};
    std::vector<int> vec2 {0,0,0};
    Display(vec2);
    
    //back inserter manages the memory allocation and keeps the size member accurate
    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));
    Display(vec2);
    
    return 0;
}