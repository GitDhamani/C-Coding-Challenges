#include <iostream>

enum HexLetters {A=10, B, C, D, E, F};

std::ostream& operator<<(std::ostream& os, const HexLetters& hx)
{
    switch(hx)
    {
        case 10: os<<"A";
        break;
        
        case 11: os<<"B";
        break;
        
        case 12: os<<"C";
        break;
        
        case 13: os<<"D";
        break;
        
        case 14: os<<"E";
        break;
        
        case 15: os<<"F";
        break;
        
        default: os << static_cast<int>(hx);
    }
    
    return os;
}

void PrintHex(int num)
{    
    int Digit1{};
    int Digit2{};
    int Digit3{};
    
    Digit1 = num/256;
    num = num%256;
    Digit2 = num/16;
    Digit3 = num%16;

    //std::cout<<Digit1<<" "<<Digit2<<" "<<Digit3<<std::endl;

    HexLetters var1 = HexLetters(Digit1);
    HexLetters var2 = HexLetters(Digit2);
    HexLetters var3 = HexLetters(Digit3);
        
    std::cout<<"Your Number in Hex is: "<<var1<<var2<<var3<<std::endl;
}

int main()
{
    std::cout<<"Please enter in a number to Convert to Hex: ";
    int num{};
    std::cin>>num;
    
    PrintHex(num);
    
    return 0;
}