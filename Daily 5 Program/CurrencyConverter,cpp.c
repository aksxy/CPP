#include <iostream>
using namespace std;
int main()
{
    char currency;
    double amount;
    cout<<"\n  yen    = 'y'\n"
        <<"  kroner = 'k'\n"
        <<"  pounds = 'p'\n\n"
        <<"Which currency you want to convert into dollar type that currency world : ";
    cin>>currency;
    cout<<"\nconvert amount : ";
    cin>>amount;
    '\n';
    if(currency=='y')
        cout<<endl<<amount<<" yen = "<<0.0081*amount<<" USD\n";
    else if(currency=='k')
        cout<<endl<<amount<<" kroren = "<<0.00082*amount<<" USD\n";
    else if(currency=='p')
        cout<<endl<<amount<<" pound = "<<1.31*amount<<" USD\n";
    else
        cout<<"\nSorry this currency we not convert yet!\n";
}

