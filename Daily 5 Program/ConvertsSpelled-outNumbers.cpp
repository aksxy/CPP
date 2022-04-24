#include<iostream>
using namespace std;
int main()
{
    string val;
    cout<<"Enter number in words : ";
    cin>>val;
    if(val=="one")
        cout<<"1\n";
    else if(val=="zero")
        cout<<"0\n";
    else if(val=="two")
        cout<<"2\n";
    else if(val=="three")
        cout<<"3\n";
    else if(val=="four")
        cout<<"4\n";
    else
        cout<<" not a number I know";
    return 0;

}

