#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <set>
#include <iomanip>

void stripword(std::string &w)
{
    std::string newword;
    for(auto ch: w)
    if (ch != '.' && ch != ',' && ch != '\'' && ch != ';')
    newword += ch;
    w = newword;   
}

void Display(const std::map<std::string, std::set<int>> &m)
{
    const int wordlength {15};
    const int occurrencelen {10};    
    
    std::cout<<std::setw(wordlength)<<std::left<<"Word";
    std::cout<<std::setw(occurrencelen)<<std::left<<"Line Numbers"<<std::endl;
    std::cout<<std::setw(30)<<std::setfill('-')<<""<<std::endl<<std::setfill(' ');
    
    for (auto element: m)
    {
        std::cout<<std::setw(wordlength)<<std::left<<element.first<<":";
        for (auto element2: element.second)
        std::cout<<std::left<<element2<<" ";
        std::cout<<std::endl;
    }
}

int main()
{

    //open the file
    std::ifstream f {"Words.txt"};
    if (!f)
    {
    std::cerr<<"ERROR - File Not Open"<<std::endl;
    return 1;
    }    
    
    //map container
    std::map<std::string, std::set<int>> MAP;  
    
    std::string line{};
    int linecount {};
    std::string word{};
    
    while(getline(f,line))
    {
        linecount++;
    
        //Now we want to turn this string into an input string that we can extract from
        std::istringstream iss {line};  //Create an input string stream and initialise it to line
    
        while(iss>>word)
        {
        stripword(word);      
        auto it = MAP.find(word);
    
        if (it == MAP.end())
        MAP.insert(std::make_pair(word, std::set<int>{linecount}));
        else
        it->second.insert(linecount);
        }
    }
    
    Display(MAP);
      

    return 0;
    f.close();
}