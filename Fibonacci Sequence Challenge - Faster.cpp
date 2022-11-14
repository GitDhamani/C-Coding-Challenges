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


void DoFib(const int& val)
{
    timer t;
    
    int val1, val2, count = 0, out = 0;    
    while(count!=val)
    {
    if (count<=0) out = 0;
    else if (count==1) { out = 1; val1 = 0; val2 = 1; }
    else if (count > 1) { out = val1 + val2; val1 = val2; val2 = out; }
    std::cout<<out<<" ";
    count++;
    }    
}

int main()
{
    DoFib(30);
    
    //Expected: 0 1 1 2 3 5 8 13 21 34
    //Output:   0 1 1 2 3 5 8 13 21 34
    
    return 0;
}
