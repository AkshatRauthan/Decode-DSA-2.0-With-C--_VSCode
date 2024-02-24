#include "iostream"
using namespace std;
int main(){
    char x;
    int a = 2;
    x = (a > 0) ? 'a' : 'c';
    cout<<"Value Of x : " << x << endl;
    cout<<"Value Of a : " << a << endl;
}

// ANSWER
// Here, a > 0 is always true.
// Therefore, x = a
// Hence, the output is :-
// a
// 2