#include "iostream"
using namespace std;
int main() {
    char a;
    cout << "Enter The Desired Character :-\n";
    cin >> a;
    a = (int)a;
    if ( a>=65 && a<=90  ||  a>=97 && a<=122 )  {
        a = (char)a;
        if (a=='a' || a=='e' || a=='i' || a=='O' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
            cout<<"Yes, The Given Character Is A Vowel.\n";
        else cout<<"No, The Given Character Is A Vowel.\n";
    }
    else cout<<"Please Enter An Alphabet As The Input\n";
}
