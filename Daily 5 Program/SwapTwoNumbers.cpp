//13.Write a program in C++ to swap two numbers.
#include <iostream>
using namespace std;
int main()
{
    int val1,val2,swapval=0;
    cout<<"Swap two numbers : \n"
        <<"------------------\n"
        <<"Input 1st number : ";
    cin>>val1;
    cout<<"Input 2nd number : ";
    cin>>val2;
     swapval=val1;
     val1=val2;
     val2=swapval;
    cout<<"After swapping the 1st number is : "<<val1<<'\n'
        <<"After swapping the 2nd number is : "<<val2<<'\n';
   // return 0;
}

