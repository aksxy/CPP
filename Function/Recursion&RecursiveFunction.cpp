//Recursion & Recursive Function
/*in this function, function are call here self in here self means call function in that function.
example:- we calculate factorial number using recursion function.
            factorial of 4 =  [4*3*2*1=24] 24 is a factorial no. of 4.  */
#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);//function call
    /* Calculation of factorial of 4.
       factorial(4) = 4*factorial(3);
       factorial(4) = 4*3*factorial(2);
       factorial(4) = 4*3*2*factorial(1);
     ---now here condition is checked and return 1 then the revers multiplication is stop if you cant decleard if condition then multiplication is going infinit.
       factorial(4) = 4*3*2*1;
       factorial(4) = 24 //final value of factorial. */
}
int main()
{
    int a;
    cout<<"Enter Number : ";
    cin>>a;
    cout<<"The factorial of number "<<a<<" is : "<<factorial(a);
}
