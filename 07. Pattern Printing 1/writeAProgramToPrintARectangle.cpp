#include "iostream"
using namespace std;
int main(){
    int l=0,b=0;
    cout<<"\nEnter The Number Of Rows Of The Rectangle :\n";
    cin>>b;
    cout<<"Enter The Number Of Columns Of The Rectangle :\n";
    cin>>l;
    cout<<"\nThe required Rectangle Is :-\n";
    for (int i=1;i<=b;i++){
        for (int i=1;i<=l;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}