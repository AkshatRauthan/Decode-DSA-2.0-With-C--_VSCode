#include<iostream>
using namespace std;
int main(){
    // PART A
    bool p = false, q = false, r = true;
    cout<<"\nValue Of p==q==r is :-\n"<<(p==q==r);
    // Solution Of p==q==r :-
    // p is false and q is also false.      {Left ==> Right}
    // Therefore, p == q is true.
    // Now both (p == q) and q == r are true.
    // Therefore, the final output is also true or 1.

    // PART B
    int a=1, b=2, c=2;
    cout<<"\n\nValue Of a==b==c is :-\n"<<(a==b==c);
    //But.....
    cout<<"\n\nValue Of c==b==a is :-\n"<<(c==b==a);
    //Why.....
    // Here (c==b) is true. Therefore (c==b) ===> 1 or true.
    // Now the value of both (c==b) and a is 1.
    // Therefore, the final answer is true or 1.
}