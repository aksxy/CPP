#include<iostream>
using namespace std;
main()
{
    int num,r,sum=0,temp;
    cout<<"Input a number : ";
    cin>>num;
    for(temp=num;num!=0;num=num/10)
    {
        r=num%10;
        sum=sum+(r*r*r);
    }
    if(sum==temp)
        cout<<temp<<" is a Armstrong number!";
    else
        cout<<temp<<" is not a Armstrong number!";
}

