#include <iostream>
#include <chrono>

struct timer
{    
    //Cannot use Auto
    std::chrono::time_point<std::chrono::high_resolution_clock> m_start;
    
    //Check time upon object creation
    timer() { m_start = std::chrono::high_resolution_clock::now(); }

    ~timer() 
    {  
    //Check time upon object destruction    
    auto m_end = std::chrono::high_resolution_clock::now(); 
    
    //Now Cast m_start and m_end timepoints as microseconds into startus and endus
    auto startus = std::chrono::time_point_cast<std::chrono::microseconds>(m_start).time_since_epoch().count();    
    
    auto endus = std::chrono::time_point_cast<std::chrono::microseconds>(m_end).time_since_epoch().count(); 
                 
    auto Duration = endus - startus;    
    std::cout<<"\nTime Taken was: "<<Duration/1000.0<<" ms ("<<Duration<<" us)";
    
    }
};


int fib(const int& i)
{
    if (i == 0) return 0;
    if (i == 1) return 1;
    return (fib(i-1) + fib(i-2));  
}

int main()
{
    timer t;
    for (int i = 0; i<30; i++)
    std::cout<<fib(i)<<" ";
    
    //Expected: 0 1 1 2 3 5 8 13 21 34
    //Output:   0 1 1 2 3 5 8 13 21 34
    
    return 0;
}
