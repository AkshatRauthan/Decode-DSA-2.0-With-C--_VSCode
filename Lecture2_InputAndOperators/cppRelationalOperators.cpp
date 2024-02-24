#include<iostream>
using namespace std;
int main(){
    int x=5 , y=8;
    cout<<"x==y is "<<(y == x)<<endl;
    cout<<"x!=y is "<<(y != x)<<endl;
    cout<<"x==4 is "<<(x == 4)<<endl;
    cout<<"8==y is "<<(8 == y)<<endl;
    cout<<"x<y is "<<(y < x)<<endl;
    cout<<"x>y is "<<(y > x)<<endl;
    cout<<"x>=y is "<<(y >= x)<<endl;
    cout<<"x<=y is "<<(y <= x)<<endl;

    // But......
    cout<<"\nBut (x=y) is "<<(x=y);
    // The Above Statement Works As Stated Below :-
    // x = y;
    //cout<<x;

    cout<<"\nAnd (y=0) is "<<(y=0);
    // The Above Statement Works As Stated Below :-
    // y = 0;
    //cout<<y;

/*
    The Main Relational Operators In C++ Are :-
    i) ==
   ii) !=
  iii) < and >
   iv) <= and >=
*/
}