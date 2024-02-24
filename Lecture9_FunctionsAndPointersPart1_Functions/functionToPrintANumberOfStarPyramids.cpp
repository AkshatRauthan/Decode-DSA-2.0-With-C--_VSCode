#include "iostream"
using namespace std;

void pyramidOfStars(int n){
    int s = 1, a = (2*n-1)/2;
    for (int i = 1; i <= n; i++) {
        cout<<"      ";
        for (int j = 1; j <= a; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= s; j++) {
            cout << "* ";
        } s += 2;
        for (int j = 1; j <= a; j++) {
            cout << "  ";
        }
        cout<<endl;
        a--;
    }
    cout<<endl;
    if (n-1 > 0) pyramidOfStars(n-1);
}

int main(){
    cout << "\nEnter The Number Of Rows To Be Present In The Pattern :\n";
    int n;
    cin >> n;
    cout << "\nThe Required Pattern Is :-\n\n";
    pyramidOfStars(2*n-1);
    system("pause");
}