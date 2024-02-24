#include "iostream"
#include "vector"
using namespace std;
int temp,n;

void initialize(int idx, int arr[], vector<int>& v){
    if (n == idx) return;
    cin>>temp;
    arr[idx] = temp;
    v[idx] = temp;
    return initialize(idx+1, arr, v);
}

void printArray(int idx, int arr[]){
    if (n == idx) return;
    cout<<arr[idx]<<endl;
    return printArray(idx+1, arr);
}

int printVector(int idx, vector<int>& v){
    if (n == idx) return 0;
    cout<<v[idx]<<endl;
    return printVector(idx+1, v);
}

int main(){
    cout<<"\nEnter The Number Of Elements : \n";
    cin>>n;
    int arr[n];
    vector<int> v(n,0);
    cout<<"\nEnter The "<<n<<" Elements : \n";
    initialize(0, arr, v);
    cout<<"\nThe Elements Of The Array Are : \n";
    printArray(0, arr);
    cout<<"\nThe Elements Of The Vector Are : \n";
    printVector(0, v);
    cout<<"\n\n";
    system("pause");
}