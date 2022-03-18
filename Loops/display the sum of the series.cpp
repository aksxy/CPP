#include<iostream>
using namespace std;
main()
{
    int i,s,sum,f,d=0;
    cout<<"Which number of series you want : ";
    cin>>s;
    cout<<endl<<"Input number of terms : ";
    cin>>i;
    d=d+s;
    for(f=1;f<=i;f++)
    {
          cout<<s<<" ";
          s=s*10+d;
          sum=sum+s;
    }
    cout<<endl<<"The sum of the series : "<<sum;
}

