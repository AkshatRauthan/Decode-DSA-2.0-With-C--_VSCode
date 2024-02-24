#include "iostream"
#include "cmath"
using namespace std;

void printFactors(int n){
    cout<<"\nAll The Factors Of "<<n<<" Are : \n";
    cout<<"1";
    for (int i=2; i<sqrt(n); i++) if (n%i == 0) cout<<"  "<<i;
    for (int i=sqrt(n); i>0; i--) if (n%i == 0) cout<<"  "<<n/i;
}

int main(){
    int n;
    cout<<"\nEnter Value Of The Number : \n";
    cin>>n;
    printFactors(n);
    cout<<"\n\n";
    system("pause");
}