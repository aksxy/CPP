#include<iostream>
using namespace std;
main()
{
    int i,j,s;
    for(i=1;i<=4;i++)
    {
        for(s=4;s>=i;s--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

