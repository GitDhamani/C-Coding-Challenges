#include <iostream>
#include <string>

/*
Objective: Create a Class which has an array of 10 integers as a member. Code a no argument constructor that fills the array with 1-10. Create a function that will fill the array with the value you pass in. Overload the << operator so you can display the contents of the array. Overload the subscript operator to allow it to be used on the object which will give the array contents at that subscript.
*/

class myarray
{
    int arr[10];
    
    public:
    myarray();
    void fill(int);
    int& operator[](int);
    friend std::ostream& operator<<(std::ostream& os, const myarray& obj);
};

myarray::myarray()
{
    for (int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++)
    arr[i] = i;
}

void myarray::fill(int val)
{
    for (auto &element: arr)
    {
        element = val;
    }
}

//Insertion Operator Overload
std::ostream& operator<<(std::ostream& os, const myarray& obj)
{
    for (auto element: obj.arr)
    {
    os << element<<" ";
    }
    os<<std::endl;    
    return os;
}

//Subscript Operator Overload
int& myarray::operator[](int index)
{
    return arr[index];
}


int main()
{
    myarray a;          //Create Object, Array initialised to 0,1,2,3,4,5,6,7,8,9
    std::cout<<a;       //Insertion operator now works to display all elements in array member
    std::cout<<a[0]<<std::endl; //Subscript operator now shows elements in array member.
    
    a.fill(10);         //Fills all elements in the array member with 10.
    std::cout<<a;       //Display all elemements in Array member.
    
    std::cout<<a[0]<<std::endl; //Displaying 1st element in array.
    
    a[0] = 11;          //Changing first element in array member to 11.
    std::cout<<a;       //Displaying all elements of Array.
    return 0;
}