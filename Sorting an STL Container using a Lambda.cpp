#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Person
{
    std::string name;
    int age;
    public:
    Person(std::string n, int a): name{n}, age{a} {}
    std::string getname() const { return name; }
    int getage() const { return age; }
    
};

int main()
{
    std::vector<Person> vec {{"Mike",10},{"Tom",15},{"Luke",5},{"Andy",7}};
    
    //Sort
    std::sort(vec.begin(), vec.end(), [] (const Person &P1, const Person &P2)
    {
        return (P1.getage() < P2.getage());
    });   
    
    //Display
    std::for_each(begin(vec), end(vec), [] (const Person& p) 
    { 
    std::cout<<p.getname()<<":"<<p.getage()<<" ";
    });
}