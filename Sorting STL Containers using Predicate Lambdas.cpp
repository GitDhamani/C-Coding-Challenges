#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

class Person
{
    std::string name;
    int age;
    public:
    Person(std::string n, int a) : name {n}, age {a} {}
    std::string getname() const {return name;}
    int getage() const {return age;}
};


std::ostream& operator<<(std::ostream &os, const std::vector<Person> &obj)
{
    os<<"[ ";
    for(auto element: obj)
    os<<element.getname()<<":"<<element.getage()<<"  ";
    os<<"]"<<std::endl; 
    return os;
}

int main()
{
    std::vector<Person> p;
    p.emplace_back("Mohammed", 25);
    p.emplace_back("James",30);
    p.emplace_back("Carl", 18);
    p.emplace_back("John", 5);
    std::cout<<p;

    std::sort(p.begin(), p.end(), [](const Person &p1, const Person &p2) 
    {return (p1.getage() < p2.getage());});    
    std::cout<<p;
    
    return 0;
}