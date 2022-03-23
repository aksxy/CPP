#include <iostream>
using namespace std;
main()
{
    int i,s,e,t,i2;
    cout<<"Enter your Starting Table = ";
    cin>>t;
    cout<<endl<<"Enter your End Table =";
    cin>>e;
    for(s=t;s<=e;s++)
    {
        for(i2=1;i2<=10;i2++)
        {
            i=i2*s;
            cout<<s<<"*"<<i2<<" = "<<i<<", ";
        }
    }
}

