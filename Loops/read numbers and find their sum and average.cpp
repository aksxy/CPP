#include<iostream>
using namespace std;
main()
{
    int a;
    float c,n=0,i;
    cout<<"Input the Number : ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
       cout<<endl<<"Number - "<<i;
       n=n+i;
    }
    i--;
    cout<<endl<<endl<<"The sum of "<<i<<" no is : "<<n<<endl;
    c=n/i;
    cout<<"The Average is : "<<c<<endl;
}

