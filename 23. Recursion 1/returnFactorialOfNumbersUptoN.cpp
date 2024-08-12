#include "iostream"
using namespace std;

void factUptoN(int m,long long fact,int n){
    cout<<m<<" : "<<fact<<endl;
    m+=1;
    fact*=(long long)m;
    if (m <= n) return factUptoN(m,fact,n);
}

int main(){
    cout<<"\nEnter The Number Upto Which You Want To Calculate Factorials :-\n";
    int n;
    cin>>n;
    cout<<"The Factorial Of All The Non-Negative Numbers Upto "<<n<<" Are :-\n";
    factUptoN(0,1,n);
    cout<<"\n\n";
    system("pause");
}
