#include<iostream>
using namespace std;
main()
{
    int i,n,sum=0,sq=0;
    cout<<"Input number of terms : ";
    cin>>n;
    cout<<"The square natural upto "<<n<<" terms : ";
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        cout<<sq<<" ";
        sum=sum+sq;
    }
    cout<<endl<<"The Sum of Square Natural Number upto "<<n<<" terms = "<<sum;
}

