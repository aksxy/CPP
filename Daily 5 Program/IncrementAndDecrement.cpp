//9. Write a program in C++ to display the operation of pre and post increment and decrement.
#include <iostream>
using namespace std;
int main()
{
    int val=57;
    cout<<"The number is : "<<val++<<"\n"
        <<"After post increment by 1 the number is : "<<val<<"\n"
        <<"After pre increment by 1 the number is : "<<++val<<"\n"
        <<"After increment by 1 the number is : "<<val+1<<"\n"
        <<"After post decrement by 1 the number is : "<<val--<<"\n"
        <<"After pre decrement by 1 the number is : "<<val<<"\n"
        <<"After decrement by 1 the number is : "<<val-1<<"\n";
    return 0;
}

