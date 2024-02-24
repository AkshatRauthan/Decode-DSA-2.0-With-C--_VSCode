#include "iostream"
using namespace std;

long long sum_in_range(long long a,long long b){
    long long sum = 0;
    for (long long i = a; i <= b; i++){
        sum += i;
    }
    return sum;
}

long long sum_in_range_optimised(long long a,long long b){
    long long n = (b - a + 1);
    long long sum = (n * (2*a + n - 1)) / 2;
    return sum;
}

int main() {
    cout << "\n" << sum_in_range_optimised(1, 1234567890);
    cout << "\n" << sum_in_range(1, 1234567890);
}