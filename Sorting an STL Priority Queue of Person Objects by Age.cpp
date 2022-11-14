#include <iostream>
#include <queue>
#include <string>

class Person
{
    std::string name;
    int age;
    
    public:
    Person(std::string n, int a) : name{n}, age{a} {}
    bool operator<(const Person& obj) const
    {
        return (this->age < obj.age);
    }
    std::string getname() const {return name;}
    int getage() const {return age;}
    
    friend std::ostream& operator<<(std::ostream& os, const Person& obj);
};

std::ostream& operator<<(std::ostream& os, std::priority_queue<Person> obj)
{
    std::cout<<"[ ";
    while(!obj.empty())
    {
    os<<obj.top().getname()<<":"<<obj.top().getage()<<" ";
    obj.pop();    
    }    
    std::cout<<"]"<<std::endl;
    return os;
}

int main()
{
    std::priority_queue<Person> pq;
    pq.push(Person{"Mohammed",25});
    pq.push(Person{"James", 30});
    pq.push(Person{"Carl", 26});
    std::cout<<pq;
    
    return 0;
}