//Declared function without parameters using void
#include <iostream>
using namespace std;

void hi(void); //function prototype
//void hi(); you can also declerd prototype like this without void.
int main()
{
    hi(); //function call
}
void hi()
{
    cout<<"Hello void function!";
}

