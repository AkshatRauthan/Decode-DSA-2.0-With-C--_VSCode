#include "iostream"
using namespace std;

int nthFibonacci(int n){
    if (n == 1 || n == 2) return 1;
    else return (nthFibonacci(n-1) + nthFibonacci(n-2));
}

int main(){
    int n;
    cout<<"\nEnter The Value Of n :-\n";
    cin>>n;
    cout<<"The "<<n<<"th Term Of The Fibonacci Series Is : "<<nthFibonacci(n);
    cout<<"\n\n";
    system("pause");
}