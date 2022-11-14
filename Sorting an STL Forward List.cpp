#include <iostream>
#include <forward_list>
#include <algorithm>
#include <string>

class Person
{
    std::string name;
    int age; 
    public:  
    Person(std::string n, int a) : name{n}, age{a} {}
    friend std::ostream& operator<<(std::ostream &os, const Person& obj);

    bool operator==(const Person& obj) const
    {
        return ((this->name == obj.name) && (this->age == obj.age));
    }    
    
    bool operator<(const Person& obj) const
    {
        return (this->age < obj.age);
    }
};

std::ostream& operator<<(std::ostream &os, const Person& obj)
{
    os<<obj.name<<":"<<obj.age;
    return os;
}

template <typename T>
void Display(const std::forward_list<T> &p)
{
    std::cout<<"[ ";
    for(auto element: p)
    std::cout<<element<<" ";
    std::cout<<"] "<<std::endl;
}

int main()
{
    std::forward_list<Person> people {{"Mohammed", 20}, {"James", 10}, {"Mike", 4}, {"Carl", 19}};
    Display(people);
    
    std::forward_list<Person>::iterator it = std::find(people.begin(), people.end(), Person{"James", 10});
    if (it!=people.end())
    people.emplace_after(it,"Andrew",17);
    else
    std::cout<<"Cannot Add in New Person"<<std::endl;
   
    Display(people);
    people.sort();
    Display(people);
       
    return 0;
}