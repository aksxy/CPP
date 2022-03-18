#include<iostream>
using namespace std;
main()
{
    int i,f,en=0,sum=0;
    cout<<"Input number of terms : ";
    cin>>i;
    cout<<"The even numbers are : ";
    for(f=1;f<=i;f++)
    {
        en=en+2;
        cout<<en<<" ";
        sum=sum+en;
    }
    cout<<endl<<"The Sum of even Natural Number upto "<<i<<" terms : "<<sum;

}
