//Inline Function
/*inline function is used when you write small function and you need to call that function many times then you
  need to use inline function using this function your program is exequte faster then normal function you use.*/
#include <iostream>
using namespace std;
inline int multiplication(int a,int b) //inline function run time : 2.411 seconds
//int multiplication(int a,int b)      //normal function run time : 5.431 seconds
{
    return a*b;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers : \n";
    cin>>num1>>num2;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
    cout<<"The ans is : "<<multiplication(num1,num2)<<endl;
}

