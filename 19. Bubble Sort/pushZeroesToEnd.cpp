#include "iostream"
#include "vector"
using namespace std;

// Push Zeroes To The End While Maintaining The Relative Order Of The Other Elements.

int main(){
    int n;
    cout<<"\nEnter The Size Of The Vector : \n";
    cin>>n;
    vector <int>v(n);
    cout<<"\nEnter The Elements Of The Vector :\n";
    for (int i=0; i<n ;i++) cin>>v[i];
    bool flag = true;
    for (int i=0; i<n-1 && flag; i++){
        flag =false;
        for (int j=0; j<n-i-1 ;j++){
            if (v[j] == 0){
                swap(v[j],v[j+1]);
                flag = true;
            }
        }
    }
    cout<<"\nThe Vector With All The Zeroes Shifted To The End Is As Follows :\n";
    for (int i=0; i<n; i++) cout<<v[i]<<"  ";
    cout<<"\n\n";
    system("pause");
}