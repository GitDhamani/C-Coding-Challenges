#include <sstream>
#include <iostream>

int main()
{
    std::ostringstream ss;
    int d{};
    std::cout<<"Please enter in a value to convert: ";
    std::cin>>d;
    
    ss << std::hex << d;  //Load hex equivalent into the string stream.
    std::string res { ss.str() }; //Give the string buffer to a string

    std::cout << res;

    return 0;
}