#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter two integers : \n";
    int val1,val2;
    while(cin>>val1>>val2)
    {

        if(val1==val2)
        {
            cout<<"Numbers are equal!\n";
        }
        else
        {
            cout<<val1<<" "<<val2<<'\n';
        }

    }
    return 0;
}

