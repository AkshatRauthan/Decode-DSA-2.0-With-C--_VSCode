// The Required Patter Is :-
//
//   5 4 3 2    2   2 3 4 5
//   5 4 3 3    3   3 3 4 5
//   5 4 4 4    4   4 4 4 5

#include "iostream"
using namespace std;

void ultimate_pattern(int n){
    int c=n;
    for (int i=c-1;i>1;i--) {
        int a = n;

        int count = i-1;
        for (int j=1;j<=n-1;j++){
            cout<<a<<"  ";
            if (count > 0) {
                a--;
                count--;
            }
        }

        cout<<n-i+1<<"  ";

        count = i-1;
        for (int j=1;j<=n-1;j++){
            cout<<a<<"  ";
            if (n+j > (2*n-i-1)) {
                a++;
                count--;
            }
        }

    cout<<"\n";
    }
}

int main(){
    ultimate_pattern(5);
}