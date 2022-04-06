#include <iostream>
using namespace std;
int main()
{
    string previous;
    string current;
    cout<<"Enter a string : ";
    while(cin>>current)  // read a stream of words
    {
        if(current==previous) // check if the word is the same as last
            cout<<"Repeated world : "<<current<<"\n";
        previous=current;
    }
}
//This program only count repeated worls like one after one ex:
                                                         //The cat cat jumped
                                                         //She she laughed He He He because what he did did not look very very good good.
//not count repeated world like : hi i'm hear hi i'm hear
                                //this program count World repeated same one after one

