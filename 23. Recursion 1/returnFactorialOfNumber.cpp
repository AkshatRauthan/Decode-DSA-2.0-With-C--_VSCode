#include "iostream"
using namespace std;

long long fact(int n){
    if (n==1 || n==0) return 1;
    return n*fact(n-1);
}

int main(){
    cout<<"\nEnter The Number :-\n";
    int n;
    cin>>n;
    if (n < 0) cout<<"Oops! Factorial Of The Given Number Do Not Exists.";
    else cout<<"The Factorial Of "<<n<<" Is : "<<fact(n);
    cout<<"\n\n";
    system("pause");
}