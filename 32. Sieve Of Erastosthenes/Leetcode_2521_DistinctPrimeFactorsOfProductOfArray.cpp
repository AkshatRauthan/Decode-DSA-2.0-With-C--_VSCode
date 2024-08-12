#include "iostream"
#include "cmath"
#include "vector"
using namespace std;

bool isPrime(int n){
    for (int i=sqrt(n); i>1; i--) if (n%i == 0) return false;
    return true;
}

int distinctPrimeFactors(int n, vector<int> &v){
    int count = 0;
    for (int i=n; i!=1 ;i--){
        if (!isPrime(i)) continue;
        for (int j=0; j<v.size(); j++) if (v[j]%i == 0) {
            count++;
            break;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"\nEnter The Number OF Elements Present In The Array : \n";
    cin>>n;
    cout<<"\nEnter The elements Of Teh Vector :\n";
    vector<int> v(n,0);
    for (int i=0; i<n; i++) cin>>v[i];
    int Ele = v[0];
    for (int i=1; i<n; i++) Ele = max(Ele,v[i]);
    Ele = distinctPrimeFactors(Ele,v);
    cout<<"\nThe Number Of Distinct Prime Factors Of Product Of The Given Array Is : \n";
    cout<<Ele;
    cout<<"\n\n";
    system("pause");
}