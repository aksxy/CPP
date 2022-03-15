#include<iostream>
using namespace std;
main()
{
    int n,i,c,e;
    cout<<"Input number of terms : ";
    cin>>e;
    for(i=1;i<=e;i++)
    {
        c=i*i*i;
        cout<<endl<<"Number is : "<<i<<" and cube of the "<<i<<" is : "<<c;
    }
}

