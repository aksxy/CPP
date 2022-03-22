#include<iostream>
using namespace std;
main()
{
    int n,i,serie=1,sum=0,f;
    cout<<"Input number of terms : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<serie;
        if(i!=n)
            {cout<<" + ";}
        sum=sum+serie;
        serie=serie*10+1;

    }
    cout<<endl<<"The Sum is : "<<sum;

}

