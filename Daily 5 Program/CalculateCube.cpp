//15.Write a program in C++ to calculate the volume of a cube.

#include <iostream>
using namespace std;
int main()
{
    int val,cube;
    cout<<"Input the side of a cube : ";
    cin>>val;
    cube = val*val*val;
    cout<<"The volume of a cube is : "<<cube<<'\n';
    return 0;
}

