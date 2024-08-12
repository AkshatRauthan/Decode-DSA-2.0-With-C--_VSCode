// The Desired Output Is: :-
// A B C D
// A B C D
// A B C D
// A B C D
// A=65
#include "iostream"
using namespace std;
int main() {
    cout<<"Enter The Number Of Alphabets You Want In The Square :\n";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) {
            cout << (char) (j + 64) << "  ";
        } cout<<endl;
    }
}