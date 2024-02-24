#include<iostream>
using namespace std;
int main(){
    // Without Escape Sequences
    cout<<"Hello PW ";
    cout<<"Hello CW ";
    cout<<"Hello JW ";

    // With Escape Sequences
    cout<<endl<<endl;
    cout<<"Hello PW"<<endl;
    cout<<"Hello CW"<<"\n";
    cout<<"Hello JW";

    // We Can Also Write As Follows :-
    cout<<endl<<endl<<"Hello PW"<<endl<<"Hello CW"<<"\n"<<"Hello JW";
}