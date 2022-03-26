#include<iostream>
using namespace std;
main()
{
    int i,in,oddn=1,add=0;
    cout<<"Input Number of terms : ";
    cin>>in;
    cout<<"The odd numbers are : ";
    for(i=1;i<=in;i++)
    {
        cout<<" "<<oddn;
        add=add+oddn;
        oddn=oddn+2;
    }
    cout<<endl<<"The Sum of odd Natural Number upto "<<in<<" terms : "<<add;
}

