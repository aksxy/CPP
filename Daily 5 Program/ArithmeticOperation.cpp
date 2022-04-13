//7.Write a program in C++ to display various type or arithmetic operation using mixed data type.
#include <iostream>
using namespace std;
int main()
{
    int a=5,b=7;
    double c=3.7,d=8.0;
    cout<<a<<" + "<<b<<" = "<<a+b<<"\n"
        <<c<<" + "<<d<<" = "<<c+d<<"\n"
        <<a<<" + "<<d<<" = "<<a+d<<"\n"

        <<a<<" - "<<b<<" = "<<a-b<<"\n"
        <<c<<" - "<<d<<" = "<<c-d<<"\n"
        <<a<<" - "<<d<<" = "<<a-d<<"\n"

        <<a<<" * "<<b<<" = "<<a*b<<"\n"
        <<c<<" * "<<d<<" = "<<c*d<<"\n"
        <<a<<" * "<<d<<" = "<<a*d<<"\n"

        <<a<<" / "<<b<<" = "<<a/b<<"\n"
        <<c<<" / "<<d<<" = "<<c/d<<"\n"
        <<a<<" / "<<d<<" = "<<a/d<<"\n";
        return 0;

}

