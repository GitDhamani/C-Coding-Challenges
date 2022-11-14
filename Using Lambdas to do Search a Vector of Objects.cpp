#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Person
{
    std::string name;
    int age;
    public:    
    Person(std::string n, int a) : name{n}, age{a} {}
    std::string getname() const {return name;}
    int getage() const {return age;}
};

class People
{
    std::vector<Person> people;
    int maxshow;
    public:
    People(int m = 10) : maxshow{m} {}
    
    void addperson(std::string n, int a)
    {
        people.emplace_back(n,a);
    }

    void showpersons()
    {
    std::cout<<"---------------------\n";
    for(auto element: people)
    std::cout<<element.getname()<<":"<<element.getage()<<std::endl;
    std::cout<<"---------------------\n";
    }
    
    void setmax(int a) { maxshow = a; };
    
    std::vector<Person> getpersons(int limit)
    {
        std::vector<Person> result;
        int count{0};
        std::copy_if(people.begin(), people.end(), back_inserter(result), 
        [this, limit, &count](const Person &p) {return (p.getage() > limit && ++count <= maxshow); });
        return result;    
    }
    
    friend std::ostream& operator<<(std::ostream &os, const std::vector<Person> &obj);
};


std::ostream& operator<<(std::ostream &os, const std::vector<Person> &obj)
{
    for (auto element: obj)
    std::cout<<element.getname()<<":"<<element.getage()<<std::endl;
    std::cout<<"--------------------\n";
    return os;
}


int main()
{   
    People People_Vec{3};
    People_Vec.addperson("Mohammed", 25);
    People_Vec.addperson("James", 30);
    People_Vec.addperson("Carl", 10);
    People_Vec.addperson("Dominique", 20);
    People_Vec.addperson("Adam", 8);
    People_Vec.addperson("June", 5);
    People_Vec.addperson("Craig", 11);
    People_Vec.addperson("Mike", 15);
    People_Vec.addperson("Luke", 19);
    People_Vec.addperson("Mark", 22);
    
    People_Vec.showpersons();
    
    std::vector<Person> results = People_Vec.getpersons(10);
    std::cout<<results;
    
    People_Vec.setmax(10);
    results = People_Vec.getpersons(10);
    std::cout<<results;
    
    results = People_Vec.getpersons(1);
    std::cout<<results;
    
    results = People_Vec.getpersons(25);
    std::cout<<results;
    
    
    return 0;
}