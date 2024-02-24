#include "iostream"
using namespace std;
int main(){
    int a;
    cout<<"Enter The Number :\n";
    cin>>a;
    if (a%3==0 || a%5==0){
        cout<<"Yes, The Number Is Divisible By 3 Or 5\n";
    }
    else cout<<"No, The Number Is Not Divisible By 3 As Well As 5\n";
}