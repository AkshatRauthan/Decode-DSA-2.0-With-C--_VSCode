#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter The Number Whose Divisibility Is To Checked :\n";
    cin>>a;
    cout<<"Enter The Number With Which Divisibility Is To Be Checked :\n";
    cin>>b;
    if (a%b == 0) cout<<"Yes, "<<a<<" Is Divisible By "<<b<<endl;
    else cout<<"No, "<<a<<" Is Divisible By "<<b<<endl;
}