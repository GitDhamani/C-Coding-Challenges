#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <cctype>

void Strip(std::string &s)
{
    std::string sentence;
    for(auto ch: s)
    if(ch!='.' && ch!='\'' && ch!=',' && ch!=' ')
    sentence +=toupper(ch);
    s = sentence;   
}

bool Palindrome(const std::string &s)
{
    std::stack<char> st;
    std::queue<char> q;
    for(auto ch: s)
    {
    st.push(ch);
    q.push(ch);
    }
    
    while(!st.empty())
    {
    if(st.top() != q.front())
    return false;
    st.pop();
    q.pop();
    }
    return true;
}

int main()
{
    std::string str;
    std::cout<<"Please Enter a String to be Tested: ";
    std::getline(std::cin, str);
    
    Strip(str); //remove spaces/grammatical characters and convert to Uppercase
    if(Palindrome(str))
    std::cout<<"You entered in a Palindrome.";
    else
    std::cout<<"That was not a Palindrome.";
    
    return 0;
}