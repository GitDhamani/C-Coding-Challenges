#include <iostream>
#include <vector>
#include <iomanip>

std::vector<std::string> zeroit1 {"00|", "01|", "02|", "03|", "04|", "05|", "06|", "07|", "08|", "09|", "10|"};
std::vector<std::string> zeroit2 {"00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10"};

int main()
{
    const int w = 5;

    //Draw Top 2 Lines
    std::cout<<std::setw(w)<<std::left<<zeroit1[0];
    for (int j = 1; j<=10; j++)
    std::cout<<std::setw(w)<<std::left<<zeroit2[j];
    std::cout<<std::endl<<std::setfill('-')<<std::setw(10*w+2)<<""<<std::setfill(' ')<<std::endl;
    
    //Draw Table
    for(int i = 1; i<=10; i++)
    {    
        std::cout<<std::setw(w)<<std::left<<zeroit1[i];
        for(int j = 1; j<=10; j++)
        {
            std::cout<<std::setw(w)<<std::left;
            if (i*j < 10) std::cout<<zeroit2[i*j];
            else std::cout<<i*j;        
        }
        std::cout<<std::endl;
    }
    
    return 0;
}