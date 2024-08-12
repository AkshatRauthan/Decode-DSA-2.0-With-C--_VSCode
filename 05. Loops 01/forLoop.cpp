#include "iostream"
using namespace std;
int main() {
    int x;
    cout << "Enter the no of loops required to run :-\n";
    cin >> x;
    int i;
    for (i = 1; x >= i; i++) {
        cout << "This is the loop number " << i << endl;
    }
}
// Syntax Of For Loop
// for( variable ; condition ; increment / decrement){
//     ----code---- ;
// }
// Firstly, the given condition is checked on the variable.
// If the condition is false then the code inside then the
// gets rejected and the computer moves ahead.
// If the condition is true then the code is executed and then
// the increment/decrement statement is also executed.
// Then the condition is again checked and all this took place in
// the same sequence until the condition becomes false.uu