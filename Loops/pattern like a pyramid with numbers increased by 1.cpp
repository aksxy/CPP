#include <iostream>
using namespace std;
main()
{
    int i,j,s,n=1;
    for(i=1;i<=4;i++)
    {
        for(s=4;s>=i;s--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
            {
                cout<<n<<" ";
                n++;
            }
        cout<<endl;
    }
}

