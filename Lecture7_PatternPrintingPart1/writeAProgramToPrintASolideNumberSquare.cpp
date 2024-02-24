#include "iostream"
using namespace std;
int main(){
    int n;
    cout<<"\nEnter The Largest Number Present In The Square :\n";
    cin>>n;
    cout<<"\nThe required Square Is :-\n";
    for (int i=1;i<=n;i++){
        for (int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}