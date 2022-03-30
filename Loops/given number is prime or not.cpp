#include <iostream>
using namespace std;
main()
{
    int n,i,v=0;
    cout<<"Input a number : ";
    cin>>n;

        for(i=2;i<=n/2;i++)
        {
           if(n % i==0 )
           {
               v++;
               break;
           }

        }
        if(v==0 && n!=1)
            cout<<n<<" is prime number!";
        else
            cout<<n<<" is not a prime number!";
}

