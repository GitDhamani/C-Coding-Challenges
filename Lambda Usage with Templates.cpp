#include <iostream>
#include <vector>

template <typename T>
void Display(const std::vector<T> &v)
{
    std::cout<<"[";
    for(auto element: v)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    std::vector<int> vec1 {1,2,3,4,5};
    std::vector<float> vec2 {1.5,2.5,3.5,4.5,5.5};
    
    //Lambda Expression
    auto add = [] (auto &v, auto n)
    {
        for (auto &element: v)
        element+=n;
    };
    
    add(vec1, 10);
    Display(vec1);  // [11 12 13 14 15]

    add(vec2, 10.5);    
    Display(vec2);  // [12 13 14 15 16]
    
    return 0;
}