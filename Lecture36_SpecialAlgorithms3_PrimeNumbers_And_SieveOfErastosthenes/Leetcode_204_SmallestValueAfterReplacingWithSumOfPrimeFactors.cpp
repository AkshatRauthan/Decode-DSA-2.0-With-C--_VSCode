#include "iostream"
#include "cmath"
#include "vector"
using namespace std;

bool isPrime(int n){
    for (int i=sqrt(n); i>1; i--) if (n%i == 0) return false;
    return true;
}

int smallestValue(int n){
    if (isPrime(n)) return n;
    int sum = 0, j = n;
    for (int i=2; j>1; i++){
        if (!isPrime(i)) continue;
        while (j%i == 0){
            sum += i;
            j /= i;
        }
    }
    if (n == sum) return n;
    return smallestValue(sum);
}

void primeFactors(int n, vector<int> &v){
    if (isPrime(n)) v.push_back(n);
    for (int i=2; n>1; i++){
        if (!isPrime(i)) continue;
        while (n%i == 0){
            v.push_back(i);
            n /= i;
        }
    }
}

int main(){
    int n;
    cout<<"\nEnter The Value Of The Number : \n";
    cin>>n;
    n=smallestValue(n);
    cout<<"\nThe Smallest Number We Got After Replacing The Number With Sum Of Its Prime Factors Is :\n";
    cout<<"\n"<<n;
    cout<<"\n\n";
    system("pause");
}