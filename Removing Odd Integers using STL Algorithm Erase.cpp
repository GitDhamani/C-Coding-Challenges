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
    std::vector<int> vec {1,2,3,4,5,6,7,8,9};

    Display(vec);    
    
    auto it = vec.begin();
    while(it!=vec.end())
    {
        if(*it%2 == 1)   //it is odd
        vec.erase(it);
        else
        it++;
    }
    
    Display(vec);
    
    return 0;
}