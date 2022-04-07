#include <iostream>
using namespace std;
int main()
{
    string first_name;
    string friend_name;
    char friend_sex;
    int age;
    cout<<"Enter the name of the person you want to write to : ";
     cin>>first_name;
    cout<<"Enter friend name : ";
    cin>>friend_name;
    cout<<"Enter friend sex : ";
    cin>>friend_sex;
    cout<<"Enter Age : ";
    cin>>age;
    cout<<"\nDear "<<first_name<<",\n"
        <<"me -      How are you?\n"
        <<first_name<<" -  I am fine.\n"
        <<"me -      I miss you.\n"
        <<first_name<<" -  ya me too.\n"
        <<"me -      Have you seen "<<friend_name<<" lately?\n";
        if(friend_sex==109 && 77)
            cout<<"me -      If you see "<<friend_name<<" please ask him to call me.\n";
            else
                cout<<"me -      If you see "<<friend_name<<" please ask her to call me.\n";
                cout<<first_name<<" -  ya sure!\n"
                <<"me -      I hear you just had a birthday and you "<<age<<" year old.\n";
               if(age<=0 || age>=110)
                    cout<<"me -      you're kidding!\n";
                else if(age<=12)
                    cout<<"me -      Next year you will be "<<age+1<<endl;
                else if(age==17)
                    cout<<"me -      Next year you will be able to vote.\n";
                else if(age>=70)
                    cout<<"me -      I hope you are enjoying retirement.";

}

