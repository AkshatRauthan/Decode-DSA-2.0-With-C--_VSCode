#include<iostream>
using namespace std;
int main(){
    // Question
    // Print Fractional Part Of A Float Input
    //                                   _____Point To Note_____ :-
    //                                  { .....VERY IMPORTANT..... }
    // Fractional Part Of A Number x ==>>[ x - Greatest Integer Function Of x ] Or {x} = x - [x]
    // Therefore, The Fractional Part Of -1.3 => -1.3 -(-2) ==> -1.3 + 2
    // ==> 0.7  Answer. Surprise!!!.
    float a ;
    cout<<"Enter The Value Of The Float :-\n";
    cin>>a;
    if ((int)a>0) cout<<"The Fractional Part Of The Given Float Is : " <<a-(int)a<<endl;
    else cout<< "The Fractional Part Of The Given Float Is : " <<a-((int)a-1)<<endl;
}
