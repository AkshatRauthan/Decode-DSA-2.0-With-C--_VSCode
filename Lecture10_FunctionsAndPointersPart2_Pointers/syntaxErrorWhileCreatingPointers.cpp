#include "iostream"
using namespace std;
int main(){

    // Initialising Two Or More Pointers In One Statement Will Always Give Error.
    // Always Initialise Pointers In Separate Statements.
    //  int* p1 = &x, p2 = &y; ERROR
    // int* p1 = &x, *p2 =&y; No Error

    int x = 10, y = 5;
    // int* p1 = &x, p2 = y;
    // No Error As p1 Is A Pointer While p2 Is An Integer.
    int* p1 = &x, *p2 =&y;
    cout<<"p1 : "<<p1<<"\n"<<"p2 : "<<p2<<"\n\n";
    system("pause");
}