#include "iostream"
using namespace std;
int main() {
    int x;
    cout<<"\nEnter The Serial Number Of The Month :-\n";
    cin >> x;
    // 31 when x is 1,3,5,7 ,8,10,12
    // 30 when x is 4,6,9,11
    // 28 when x is 2
    switch ((x%2==1 && x<8) || (x%2==0 && x>7 && x<13)) {
        case 1:
            cout << "The Number Of Days In The Month Are : " << 31 << endl;
            break;
    }
    switch ((x%2==0 && x<8 && x>2) || (x%2==1 && x>8 && x<12)) {
        case 1:
            cout << "The Number Of Days In The Month Are : " << 30 << endl;
            break;
    }
    switch (x==2) {
        case 1:
            cout << "The Number Of Days In The Month Are : " << 28 << endl;
            break;
    }
    switch (x>12 || x<0) {
        case 1:
            cout << "Invalid Input\n";
            break;
    }
}