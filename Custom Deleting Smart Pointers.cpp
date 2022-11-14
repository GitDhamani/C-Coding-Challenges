#include <memory>
#include <iostream>

void mydeletefunc(int* i)  //Your custom deleter is passed a pointer to the heap memory
{
    //take care of anything you need to do
    std::cout<<"Custom Deleter used";
    delete i; //This is the minimum you have to do here, deallocate the heap memory
}

int main()
{
    std::shared_ptr<int> ptr1 {new int(4), mydeletefunc };
    std::shared_ptr<int> ptr2 {new int(10)};
    
    return 0;
}