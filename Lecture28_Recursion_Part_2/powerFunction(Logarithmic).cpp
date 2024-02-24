#include "iostream"
using namespace std;

int temp;

int powOptimised(int a, int b){
    if (a == 1 || b == 0) return 1;
    if (b == 1) return a;
    temp = powOptimised(a,b/2);
    temp *= temp;
    if (b%2) temp *= a;
    return temp;
}


int main(){
    int a,b;
    cout<<"\nEnter The Value Of The Exponent :\n";
    cin>>a;
    cout<<"\nEnter The Power Of The Exponent :\n";
    cin>>b;
    cout<<"\nThe Value Of "<<a<<" Raised To The Power Of "<<b<<" Is : "<<powOptimised(a,b);
    cout<<"\n\n";
    system("pause");
}