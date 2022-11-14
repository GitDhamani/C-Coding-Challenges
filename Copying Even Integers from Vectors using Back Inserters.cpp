#include <iostream>
#include <vector>
#include <algorithm>

void Display(const std::vector<int> &v)
{
    for (auto element: v)
    std::cout<<element<<" ";
    std::cout<<std::endl;
}

int main()
{
    std::vector<int> vec1 {0, 0, 0};
    std::vector<int> vec2 {9,8,7,6,5,4,3,2,1};
    std::copy_if(vec2.begin(), vec2.end(), std::back_inserter(vec1), [](int x) {return ((x%2)==0);});
    Display(vec1);
    
    return 0;
}