#include<iostream>
using namespace std;
main()
{
  int l,fact=1,i;
    cout<<"Input the number : ";
    cin>>i;
    for(l=1;l<=i;l++)
    {
        fact=fact*l;
    }
    cout<<"The Factorial of "<<i<<" is : "<<fact;
}

