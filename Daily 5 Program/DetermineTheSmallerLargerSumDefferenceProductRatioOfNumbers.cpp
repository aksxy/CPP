#include <iostream>
using namespace std;
int main()
{
    int val1,val2;
    cout<<"Enter two integer value : ";
    cin>>val1>>val2;
    int smaller,larger;
    if(val1<val2)
    {
        smaller=val1;
        larger=val2;
    }
    else
    {
        smaller=val2;
        larger=val1;
    }
   // int sum,difference,product,ratiio;
    cout<<"smaller = "<<smaller<<'\n'
    <<"larger = "<<larger<<'\n'
    <<"sum    = "<<val1+val2<<'\n'
    <<"difference = "<<val1-val2<<'\n'
    <<"product    = "<<val1*val2<<'\n'
    <<"ratio      = "<<val1/val2<<'\n';
}

