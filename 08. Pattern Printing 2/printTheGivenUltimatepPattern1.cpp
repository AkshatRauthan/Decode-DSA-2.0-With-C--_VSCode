// The Required Patter Is :-
//
//   5 5 5 5    5   5 5 5 5
//   5 4 4 4    4   4 4 4 5
//   5 4 3 3    3   3 3 4 5
//   5 4 3 2    2   2 3 4 5
//
//   5 4 3 2    1   2 3 4 5
//
//   5 4 3 2    2   2 3 4 5
//   5 4 3 3    3   3 3 4 5
//   5 4 4 4    4   4 4 4 5
//   5 5 5 5    5   5 5 5 5

#include "iostream"
using namespace std;

void ultimate_pattern(int n){
    cout<<"\nThe Required Pattern Is :\n\n";
    if (n==1){
        cout<<1<<"\n";
        return;
    }
    for (int i = 0;i<2*n-1;i++) cout<<n<<"  ";
    cout<<"\n";
    int c=n;
    for (int i=1;i<c-1;i++){
        int a=n;
        int count = i;
        for (int j=1;j<=n-1;j++){
            cout<<a<<"  ";
            if (count > 0) {
                a--;
                count--;
            }
        }
        cout<<n-i<<"  ";
        count = i;
        for (int j=1;j<=n-1;j++){
            cout<<a<<"  ";
            if (n+j >= (2*n-i-1)) {
                a++;
                count--;
            }
        }
        cout<<"\n";
    }
    for (int i=n,count=1;count<=2*n-1;count++){
        cout<<i<<"  ";
        if (count<n) i--;
        else i++;
    }
    cout<<"\n";
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
    for (int i = 0;i<2*n-1;i++) cout<<n<<"  ";
    cout<<"\n\n";
}

int main() {
    int n;
    cout << "\nEnter The Number Upto Which You Want To Print The Pattern :\n";
    cin >> n;
    ultimate_pattern(n);
    system("pause");
}
