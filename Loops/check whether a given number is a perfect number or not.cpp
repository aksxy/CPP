#include<iostream>
using namespace std;
main()
{
    int i,n,divi,sum=0;
    cout<<"Input the number : ";
    cin>>n;
    cout<<"The positive divisor : ";
    for(i=1; i<=n; i++)
    {
        for(divi=1; divi<=n; divi++)
        {
            if(divi*i==n && i!=n)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
        }

    }
    cout<<endl<<"The sum of divisor is : "<<sum;
    if(sum==n)
        cout<<endl<<"The "<<n<<" is Perfect Number!";
    else
        cout<<endl<<"So, the "<<n<<" is Not Perfect Number!";
}

