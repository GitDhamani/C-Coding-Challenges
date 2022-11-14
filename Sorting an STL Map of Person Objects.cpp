#include <map>
#include <iostream>
#include <string>

class Person 
{
    std::string name;
    int age;
    
    public:  
    Person(std::string n, int a): name{n}, age{a} {}
    
    bool operator<(const Person& obj) const
    {
        return (this->age < obj.age);
    }
    
    std::string getname() const {return name;}
    int getage() const {return age;}
    
};

void Display (const std::map<Person, char> &m)
{
    std::cout<<"[ ";
    for(auto element : m)
    std::cout<<element.first.getname()<<":"<<element.first.getage()<<":"<<element.second<<" ";
    std::cout<<"]"<<std::endl;
}

int main()
{
    std::map<Person, char> MAP {{{"Mohammed", 25}, 'A'}, {{"Carl", 10}, 'B'}, {{"James", 30}, 'C'}};
    
    
    //MAP[{"Carl", 10}] = 'D';   //Changing Carl's grade to a D Just for fun
    // auto it = MAP.find({"Mohammed", 25});  //Also how we would now find an Element
    
    Display(MAP);
    return 0;
}