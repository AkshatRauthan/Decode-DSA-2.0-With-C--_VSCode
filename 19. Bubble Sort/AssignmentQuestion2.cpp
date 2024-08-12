#include "iostream"
# include "vector"
# include "algorithm"
using namespace std;

// Check if the given array is almost sorted. (Elements Are At-Most One Position Away)

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements In The Array :\n";
    cin>>n;
    vector<int> v(n);
    vector<int> v1(n);
    cout<<"\nEnter The Elements Of The Array :\n";
    for (int i=0,temp; i<n; i++) {
        cin>>temp;
        v[i]=temp;
        v1[i]=temp;
    }
    bool flag = true;
    for (int i=0; i<n-1 && flag; i++) {
        flag = false;
        for (int j=0; j<n-1-i; j++) {
            if (v1[j] > v1[j + 1]) {
                swap(v1[j], v1[j + 1]);
                flag = true;
            }
        }
    }
    flag =true;
    for (int i=0; i<n-1; i++) if (v[i] > v[i+1]) swap(v[i],v[i+1]);
    for (int i=0; i<n; i++) {
        if (v[i] != v1[i]) {
            flag = false;
            break;
        }
    }
    if (flag) cout << "\nYes, The Given Array Is An Almost Sorted.";
    else cout<<"\nNo, The Given Array Is Not An Almost Sorted Array.";
    cout<<"\n\n";
    system("pause");
}