//Function Overloading
//Function overloading means use same function(same name of function)for multiple task.
#include <iostream>
using namespace std;
 int sum(int a,int b)
 {
     return a+b;
     cout<<"using 2 arguments! \n"; //this is four understand you call that function is work on not!
 }
 int sum(int a, int b, int c)
 {
     return a+b+c;
     cout<<"using 3 arguments! \n";
 }
 int sum(int a)
 {
     return a*a;
     cout<<"using 1 argument! \n"; //find the squar.
 }
 int main()
 {
     cout<<"The sum of 3 and 7 is : "<<sum(3,7)<<endl;
     cout<<"The sum of 8, 2, and 5 is : "<<sum(8,2,5)<<endl;
     cout<<"The squar of 7 is : "<<sum(7)<<endl;
 }
