//Call by Reference
/*in this we are copy a address of num1 and num1 and give to the a and b then this swap function swap numbers using ther address if we can not give
  address and give directly value then values are not swap num1 and num2 print its orignal value but after address we give values are swpad. */
#include <iostream>
using namespace std;
/*void swap(int *a,int *b)
{
    int temp=*a;
        *a=*b;    without reference variable
        *b=temp;
}
*/ void swap(int &a,int &b)  //declerad Reference variable.
{
    int temp=a;
    a=b;         //Using Reference variable
    b=temp;
}
int main()
{
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"first number is "<<num1<<" Second number is "<<num2<<endl;
    swap(num1, num2);     //with Reference function call like this
    //swap(&num1,&num2); //without Reference  variable you call function like this
    cout<<"first number is "<<num1<<" Second number is "<<num2;
}

