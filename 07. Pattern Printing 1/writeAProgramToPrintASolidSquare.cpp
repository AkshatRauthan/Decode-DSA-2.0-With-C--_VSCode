#include "iostream"
using namespace std;
int main(){
    int n;
    cout<<"\nEnter The Side Of The Square :\n";
    cin>>n;
    cout<<"\nThe required Square Is :-\n";
    for (int i=1;i<=n;i++){
        for (int i=1;i<=n;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}