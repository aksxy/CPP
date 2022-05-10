
//Default Arguments in Functions
//in this you can set default arguments(values) in the function paramiters and use that.
#include <iostream>
using namespace std;
float moneyReceived(int currentMoney,float factor=1.04)
{
    return currentMoney*factor;
}
int main()
{
    int money=100000;
    cout<<"If you have "<<money<<" rs in your bank account you will receive intrest "<<moneyReceived(money)<<" rs after one year! \n";/*in function call you give only one paramiter becoase
                                                                                                                                       in function you define the value of second paramiter. it will give you 4% intrest*/
    cout<<"If you have "<<money<<" rs in your bank and if you are a VIP member then you will receive intrest "<<moneyReceived(money,1.1)<<" rs after one year! \n";
                                                                                                              /*in this function call you can change the value of factor paramiter in function
                                                                                                              thats way it will give you 10% of intrest.*/
}
