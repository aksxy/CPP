
#include<iostream>
using namespace std;
main()
{
    int i,j,odd=1,s;
    cout<<"Enter Number of lines for pyramid : ";
    cin>>j;
    for(i=j; i>=1; i--)
    {
        for(s=1; s<=i-1; s++)
        {
            cout<<" ";
        }
        for(j=1; j<=odd; j++)
        {

            cout<<"*";
        }
        odd=odd+2;
        cout<<endl;
    }
}
