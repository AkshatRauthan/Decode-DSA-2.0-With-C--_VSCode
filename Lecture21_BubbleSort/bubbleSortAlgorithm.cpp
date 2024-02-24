#include "iostream"
#include "array"
using namespace std;

//                                    ________Bubble Sort_________
//  Algorithm :- In Each Pass Swap Every Pair Two Adjacent Elements If The First Element Of The Pair Is Larger.
//  In Each Pass The nth Max Element Goes To The nth Rightmost Index.
//  If There Are n Elements, Then The Array Will Get Completely Sorted In Maximum n-1 Passes.
//  Time Complexity :- O(n*n)
//  Space Complexity :- O(1)

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements : \n";
    cin>>n;
    int arr[n];
    cout<<"\nEnter The Elements Of The Array : \n";
    for (int i=0;i<n;i++) cin>>arr[i];
    cout<<"\nThe Elements Of The Array Are : \n";
    for (int i=0;i<n;i++) cout<<arr[i]<<"  ";

    // Optimised Bubble Sorting Algorithm :-
    // Best Case Time Complexity :- O(n)
    // Average And Worst Case Time Complexity :- O(n*n)
    // Space Complexity :- O(1)
    // Maximum Number Of Swaps With n Elements :- (n-1) * n / 2
    bool flag = true;
    for (int i=0; i<n-1 && flag; i++) {
        flag = false;
        for (int j=0; j<n-1-i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
    }
    cout<<"\n\nThe Elements of The Array In Sorted Order Are : \n";
    for (int i=0;i<n;i++) cout<<arr[i]<<"  ";
    printf("\n\n");
    system("pause");
}