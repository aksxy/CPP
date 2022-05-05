#include <iostream>
using namespace std;
int sum(int a,int b)  //a & b is a formal parameters
{
    int c = a+b;  //a & b will be taking vlaues from actual parameters num1 & num2
    return c;
}
int main()
{
    int num1,num2;  // num1 & num2 is a actual parameters
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1 , num2);// num1 and num2 values are replase with sum function a & b then sum function
                                           //  will return value in c that value will be printed and this is called Return Value Function Key.
    return 0;

}
