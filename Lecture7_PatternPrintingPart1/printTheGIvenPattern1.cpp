// The Desired Output Is: :-
// *
// * *
// * * *
// * * * *

#include "iostream"
using namespace std;
int main(){
    cout<<"Enter The Number Of Stars In The Last Row :\n";
    int n;
    cin>>n;
    for (int j=1;j<=n;j++){
        for (int i=1;i<=j;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}