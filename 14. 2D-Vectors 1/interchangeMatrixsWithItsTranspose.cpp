#include "iostream"
#include "vector"
using namespace std;

void interchange(int a,int arr[a][a]){
    int temp = 0,end = a - (a/2);
    for (int i = 0; i < end; i++){
        for (int j = 0; j < end; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main() {
    int a;
    cout << "\nEnter The Order Of The Square Matrix :\n";
    cin >> a;
    int arr[a][a];
    for (int i = 0; i < a; i++) for (int j = 0; j < a; j++) cin >> arr[i][j];
    cout << "\n";
    interchange(a,arr);
}