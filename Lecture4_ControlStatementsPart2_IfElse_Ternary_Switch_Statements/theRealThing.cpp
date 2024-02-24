#include "iostream"
using namespace std;
int main() {
    int a;
    if (3+2 % 5)    cout<<"This works\n";
    if (a = 10)     cout<<"Even this works\n";
    if (-5)         cout<<"Surprisingly evenly this works\n";
    if (10%2)       cout<<"Here, the answer is 0.\nSo this loop will return false and will not run.\n";
}
// Here in the condition of If statement
// In case I : (3+2 % 5) is an expression. And (3+2 %5) != 0 always.
// And because it is inside if statement the result will be taken as a boolean datatype.
// And, in boolean data type all the values except 0 returns 1 or true.
// Therefore, in all cases the loop runs.