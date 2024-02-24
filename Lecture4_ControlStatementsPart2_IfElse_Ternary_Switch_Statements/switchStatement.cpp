#include "iostream"
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : \n";
    cin>>x;
    switch (x) {
        case 1 :
            cout<<"The value of x is 1\n";
            break;
        case 2 :
            cout<<"The value of x is 2\n";
            break;
        default :
            cout<<"Thank You!\n";
    }
}
// Switch Statement's Syntax :-
/*
switch (integer expression / condition) {
    case constant_1 :
        do this;
        break;
    case constant_2 :
        do this;
        break;
    case constant_3 :
        do this;
        break;
    default :
        do this;
}
*/

// Without break keyword all the statements that are present after the required case constant will get executed
// along with the statement in the required case constant.