#include "iostream"
#include "cmath"
using namespace std;

bool perfectNumber(int n){
    int sum = 0;
    for (int i=1; i<sqrt(n); i++) if (n%i == 0) sum += i;
    for (int i=sqrt(n); i>1; i--) if (n%i == 0) sum += n/i;
    return (sum == n);
}

int main(){
    int n;
    cout<<"\nEnter The Number To Check :\n";
    cin>>n;
    if (perfectNumber(n)) cout<<"\nYes, "<<n<<" Is A Perfect Number.";
    else cout<<"\nNo, "<<n<<" Not A Perfect Number.";
    cout<<"\n\n";
    system("pause");
}