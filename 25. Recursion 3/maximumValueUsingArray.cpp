#include "iostream"
using namespace std;
int temp,n;

void initialize(int idx, int arr[]){
    if (n == idx) return;
    cin>>temp;
    arr[idx] = temp;
    return initialize(idx+1, arr);
}

int maxArray(int idx, int arr[]){
    if (idx == n) return INT_MIN;
    return max(arr[idx],maxArray(idx+1,arr));
}

int main(){
    cout<<"\nEnter The Number Of Elements : \n";
    cin>>n;
    int arr[n];
    cout<<"\nEnter The "<<n<<" Elements Of The Array : \n";
    initialize(0, arr);
    cout<<"\nThe Maximum Element In The Array Is : "<<maxArray(0, arr);
    cout<<"\n\n";
    system("pause");
}