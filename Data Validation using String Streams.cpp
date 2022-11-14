#include <iostream>
#include <sstream>

int main()
{
    int num {};
    std::cout<<"Please Enter in a Number: ";
    
    std::string str;
    std::cin>>str;
 
    //Create the input string stream and connect it to str   
    std::istringstream iss {str};
    
    //Check if extraction to an integer variable is successful
    if (iss >> num)
    std::cout<<"You Entered in a Number, thank you.";
    else
    std::cout<<"Invalid Entry.";
    
    return 0;
}