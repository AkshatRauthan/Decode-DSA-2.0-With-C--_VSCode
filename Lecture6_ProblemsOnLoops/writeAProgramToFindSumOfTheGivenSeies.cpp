#include "iostream"
using namespace std;
int main() {
    cout << "\n\nThe Given Series Is :- 1 - 2 + 3 - 4 + ......n\n";
    cout << "\nEnter The Number Of Term Upto Which You Want To Calculate The Sum\n";
    int n, i = 1, sum = 0;
    cin >> n;

//    // Method 1 : By Looping : Lammmba Method
//    while (i <= n)
//        if (i % 2 == 1) {
//            sum += i;
//            i++;
//        } else {
//            sum -= i;
//            i++;
//        }

    // Method 2 : By Mathematics : Chhotu Method
    if (n%2==0){ // Even Number Of Terms
        // Series ==> (1-2) + (3-4) +......+ ((n-1) - n)
        // This Becomes ==> (-1) + (-1) +..... (-1) ===> (-1)*(n/2)
        sum=(-1)*(n/2);
    } else { // Odd Number Of Terms
        // Series ==> Sum Of (n-1) Even Terms + n
        sum=(-1)*((n-1)/2)+n;
    }
    cout << "\nThe Sum Of The Series Upto The " << n << "th Term Is " << sum << endl;
}