#include "iostream"
#include "array"
using namespace std;

//                                     ________Insertion Sort________
// Algorithm :- In Every Round Swap The nth Element With Its Previous One Until The Element Is Smaller Than
// Previous One After Starting All The Rounds From The Second Index.
// Here We Have Initially Divided Our Array Into Two Parts : The Sorted Part Containing The First Element And
// The Unsorted Part Containing All The Remaining Elements.
// But At The Same Time The Whole Of The Array Remains Unsorted Until The LAst Pass.
// Now After Every Round The length Of The Sorted Part Increases By 1 And The Size Of The Unsorted Part Decreases
// By 1.
// All This Will Continue Until The Length OF The Unsorted Part Becomes Zero.
// Remember That We Are Not Actually Dividing Our Array, It Is Just A Notation USed To Address Them.

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements Present In The Array : \n";
    cin>>n;
    int arr[n];
    cout<<"\nEnter The Elements Of The Array :\n";
    for (int i=0; i<n; i++) cin>>arr[i];
    cout<<"\nThe Elements Of The Array Are : \n";
    for (int i=0; i<n; i++) cout<<arr[i]<<"  ";

    // Insertion Sort Algorithm :-
    // Worst Case Time Complexity :- O(n*n)
    // Best Case Time Complexity :- O(n)
    // Average Case Time Complexity :- O(n*n)
    // Space Complexity :- O(1)
    // Here The Algorithm Works Exactly Like The Optimised Bubble Sort Without Using Any Check-mark.
    // Insertion Sort Algorithm Is Stable In Nature As It Maintains The Relative Order Of Even Same Elements.
    for (int i=1; i<n; i++){
        for (int j=i; arr[j-1]>arr[j] && j>0;j--){
            swap(arr[j-1],arr[j]);
        }
    }
    cout<<"\n\nThe Elements of The Array In Sorted Order Are : \n";
    for (int i : arr) cout<<i<<"  ";
    printf("\n\n");
    system("pause");
}