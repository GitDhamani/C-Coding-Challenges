#include <iostream>
#include <vector>

/*
Write a Function which takes in a vector of integers and adds 10 to only the even numbers. 
Use Predicate Lambdas.
*/

void Display(const std::vector<int> &v)
{
    std::cout<<"[";
    for(auto element: v)
    std::cout<<element<<" ";
    std::cout<<"]"<<std::endl;
}

void add_10(std::vector<int> &v, int n, bool (*pred)(int x))
{
    for (auto &element: v)
    if (pred(element))
    element+=10;
}

int main()
{
    std::vector<int> vec {1,2,3,4,5};
    add_10(vec, 10, [] (int x) { return (x%2 == 0);});
    Display(vec); // [1 12 3 14 5]
    
    return 0;
}