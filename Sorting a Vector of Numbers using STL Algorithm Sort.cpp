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
    std::vector<int> vec {9,8,7,6,5,4,3,2,1};
    std::sort(vec.begin(), vec.end());
    Display(vec);
    return 0;
}