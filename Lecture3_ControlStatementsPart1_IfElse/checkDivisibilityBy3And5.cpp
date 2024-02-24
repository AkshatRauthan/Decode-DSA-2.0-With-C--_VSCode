#include "iostream"
using namespace std;
int main(){
    int a;
    cout<<"Enter The Number :\n";
    cin>>a;
    if (a%15==0){
        cout<<"Yes, The Number Is Divisible By Both 3 And 5";
    }
    else cout<<"No, The Number Is Not Divisible By Both 3 And 5";
}