//Function prototype
//use function prototype if you want to write your function next to the main function.
#include <iostream>
using namespace std;
//syntax of prototype  <type function_name(arguments);>

int sum(int a,int b);//function prototype declared.

int main()
{
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1,num2);
    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

