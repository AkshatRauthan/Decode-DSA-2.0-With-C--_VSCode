#include<iostream>
using namespace std;
int main(){
    int x = 5 , y = 6;
    cout<<"Value Of x is "<<x;
    cout<<"\nValue Of y is "<<y;
    cout<<"\nx%=y is "<<(x%=y);
    cout<<"\nValue Of x is "<<x;
}
/*
    The Main Assignment Operators In C++ Are:-
    = , += , -= , /= , %=

    Important Point :-
    The Statement "x += 5" is Faster Than "x = x + 5" As It Is Executed With Fewer Calculations.
*/