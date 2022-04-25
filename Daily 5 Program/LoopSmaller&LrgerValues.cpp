#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter two integers : \n";
    int val1,val2;
    while(cin>>val1>>val2)
    {

        if(val1<val2)
        {
            cout<<"the smaller value is:"<<val1<<'\n';
            cout<<"the larger value is:"<<val2<<'\n';
        }
        else
        {
            cout<<"the smaller value is:"<<val2<<'\n';
            cout<<"the larger value is:"<<val1<<'\n';
        }

    }
    return 0;
}

