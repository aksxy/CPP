#include<iostream>
using namespace std;
main()
{
    int n,a=0,i;
    cout<<"Enter Number : "<<endl;
    cin>>i;
    cout<<"The first "<<i<<" Natural numbers is :"<<endl;
    for(n=1;n<=i;n++)
    {
        cout<<n<<endl;
        a=a+n;
    }
    cout<<"The sum natural numbers is :"<<a;
}

