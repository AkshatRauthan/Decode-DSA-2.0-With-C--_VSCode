#include "iostream"
#include "vector"
#include "cmath"
using namespace std;

bool isPrime(int n){
    for (int i=sqrt(n); i>1; i--) if (n%i == 0) return false;
    return true;
}

int diagonalPrime(vector<vector <int>> &v){
    int maxPrime = 0, n = v.size();
    for (int i=0; i<v[0].size(); i++){
        if ( isPrime(v[i][i]) && maxPrime < v[i][i]) maxPrime = v[i][i];
        if ( isPrime(v[i][n-i-1]) && maxPrime < v[i][n-i-1]) maxPrime = v[i][n-i-1];
    }
    return maxPrime;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Rows Present In The Vector : \n";
    cin>>n;
    vector<vector <int>> v(n,vector <int>(n,0));
    cout<<"\nEnter The Elements Of The Vector : \n";
    for (int i=0; i<n; i+=1) for (int j=0; j<n; j++) cin>>v[i][j];
    int maxPrime = diagonalPrime(v);
    cout<<"\nThe Largest Prime Number Present On The Diagonals Of The Given Vector Is : "<<maxPrime;
    cout<<"\n\n";
    system("pause");
}