#include "iostream"
using namespace std;
    //  Write a program to print the elements of both the diagonals in a square matrix.
    //  Input 1:
    //  1 2 3
    //  4 5 6
    //  7 8 9
    //  Output 1:
    //  1 3
    //   5
    //  7 9

int main(){
    int n;
    cout<<"\nEnter The Order Of The Square Matrix :\n";
    cin>>n;
    int arr[n][n];
    cout<<"\nEnter The "<<n*n<<" Elements Of The Square Matrix :\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr[i][j]=temp;
        }
    }
    cout<<"\nThe Entered Square Matrix Is :\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) cout<<arr[i][j]<<"  ";
        cout<<endl;
    }

    cout<<"\nThe Diagonal Elements Of The Square Matrix Are :\n";
    int a=0,b=n-1;
    for (int i=0;i<n;i++){
        if (i==n/2 && i%2==1 && n>2) {
            for (int j = 0; j<n/2+1; j++) cout << " ";
            cout << arr[i][a]<<endl;
            a++;
            b--;
            continue;
        }
        for (int j=0;j<n;j++){
            if ((j==a || j==b) && a!=b) cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
        a++;
        b--;
    }}