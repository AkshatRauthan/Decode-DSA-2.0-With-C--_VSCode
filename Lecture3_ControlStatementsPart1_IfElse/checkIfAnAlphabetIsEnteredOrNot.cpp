#include "iostream"
using namespace std;
int main() {
    char a;
    cout<<"Enter The Character To Check :-\n";
    cin>>a;
    a = (int)a;
    if ( a>=65 && a<=90  ||  a>=97 && a<=122 ){
        cout<<"Yes, The Given Character Is An Alphabet\n";
    }
    else cout<<"No, The Given Character Is Not An Alphabet\n";

    // The Precedence Of && Is Greater Than || .
}