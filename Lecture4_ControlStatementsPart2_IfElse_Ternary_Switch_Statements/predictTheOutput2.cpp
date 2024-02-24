#include "iostream"
using namespace std;
int main(){
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    cout<<"/nValue of x : "<<x;
}

// ANSWER
// Here, 5 > 8 is always false.
// Therefore, the nested ternary statement will get executed.
// Here, In (1 != 2 < 5) the precedence of '<' is greater than that of '!='.
// Now, 2 < 5 is always true or 1.
// Therefore, the equation becomes (1 != 1 ) which is false or 0.
// Therefore, x = 30.