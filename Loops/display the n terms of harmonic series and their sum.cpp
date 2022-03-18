#include<iostream>
using namespace std;
main()
{
    float f,i,sum=0,series=0;
    cout<<"Input the number of terms : ";
    cin>>i;
    for(f=1;f<=i;f++)
    {
        series = 1 / f;
        sum=sum+series;
    }
    cout<<"Sum of Series upto "<<i<<" terms : "<<sum;

}

