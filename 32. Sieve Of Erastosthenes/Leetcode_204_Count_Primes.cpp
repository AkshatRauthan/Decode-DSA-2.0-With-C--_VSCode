#include "iostream"
#include "cmath"
#include "vector"
using namespace std;

bool isPrime(int n){
    for (int i=sqrt(n); i>1; i--) if (n%i == 0) return false;
    return true;
}

int countPrimes(int n){
    vector<bool> v(n+1,true);
    for (int i=2; i<sqrt(n);i++){
        if (!v[i] || !isPrime(i)) continue;
        for (int j=2*i; j<n+1;j+=i) v[j] = false;
    } int sum = 0;
    for (int i=2; i<n; i++) if (v[i] == 1) sum++;
    return sum;
}

int main(){
    int n;
    cout<<"\nEnter The Value Of The Number :\n";
    cin>>n;
    int count = countPrimes(n);
    cout<<"\nThe Number Of Prime Numbers Strictly Less Than "<<n<<" Are : "<<count<<"\n\n";
    system("pause");
}