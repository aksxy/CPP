//14.Write a program in C++ to calculate the volume of a sphere. Go to the editor

#include <iostream>
using namespace std;
int main()
{
    int val;
    float ans;
    cout<<"Input the radius of a sphere : ";
    cin>>val;
    ans = (4*3.14*val*val*val)/3;
    cout<<"The volume of a sphere is : "<<ans<<'\n';
    return 0;
}

