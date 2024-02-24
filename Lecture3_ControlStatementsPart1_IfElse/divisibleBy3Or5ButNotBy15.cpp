#include "iostream"
using namespace std;
int main(){
    int a;
    cout<<"Enter The Number To Check :-\n";
    cin>>a;
    if (a%3==0 || a%5==0) {
        if (a%15!=0){
            cout<<"Yes! The Number Is Divisible By 3 Or 5 And Not By 15\n";
        }
        else cout<<"Oops! The Number Is Divisible By 15\n";
    }
    else cout<<"Oops! The Number Is Not Divisible By 3 As Well As 5";
}