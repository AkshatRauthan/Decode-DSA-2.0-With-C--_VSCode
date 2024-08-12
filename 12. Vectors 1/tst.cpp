#include <iostream>
#include <vector>
#include "algorithm"
using namespace std;
int main(){
    int arr[10];
    int j=0;
    for (int i=10;i>=1;i--){
        arr[j]=i;
        j++;
    }
    sort(arr, arr+10);
    cout<<"\nThe Final Array Is As Follows :\n";
    for (int i=0;i<=9;i++){
        cout<<arr[i]<<"  ";
    }
    system("pause");
}