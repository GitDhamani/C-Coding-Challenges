#include <iostream>

int main()
{

    const int row = 2;
    const int col = 5;
    int iarray[row][col] = {{1,2,3,4,5},{6,7,8,9,10}};
    
    //Show 2D Array
    for (int i = 0; i<row; i++)
    {
    for (int j = 0; j<col; j++)
    std::cout<<iarray[i][j]<<" ";
    std::cout<<std::endl;    
    }
    
    //Convert to 1D Array
    int newarray[row*col];
    for (int i = 0; i<row; i++)
    for (int j = 0; j<col; j++)
    newarray[j + i*col] = iarray[i][j]; //The interesting index part
    
    //Show 1D Array
    for (int i = 0; i<row*col; i++)
    std::cout<<newarray[i]<<" ";  
    
    return 0;
}