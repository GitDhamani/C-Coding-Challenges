#include <iostream>

class Func
{
    public:
    void operator()(int x)
    {
        std::cout<<x<<std::endl;
    }
};

void f2(int x)
{
    std::cout<<x<<std::endl;
}

int main()
{
    Func f1;
    f1(10); //Functor
    f2(10); //Function
    
    return 0;
}