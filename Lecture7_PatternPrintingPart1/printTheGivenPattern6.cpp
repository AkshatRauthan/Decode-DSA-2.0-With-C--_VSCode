// The Desired Output Is: :-
// A
// A B
// A B C
// A B C D
// A=65
#include "iostream"
using namespace std;
int main() {
    cout<<"Enter The Number Of Alphabets You Want In The Square :\n";
    int n;
    cin>>n;
    cout<<endl;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++) {
            cout << (char) (j + 64) << "  ";
        } cout<<endl;
    }
}