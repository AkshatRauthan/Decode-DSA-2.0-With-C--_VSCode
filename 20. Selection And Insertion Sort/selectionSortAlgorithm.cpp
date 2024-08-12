#include "iostream"
#include "array"
using namespace std;

//                                       ________Selection Sort________
//  Algorithm :- In Each Round Find The Minimum Element In The Array And Swap It With The First nth Element.
//  In Each Round The nth Minimum Element Goes To The nth Index.
//  If There Are n Elements, Then The Array Will Get Completely Sorted In Maximum n-1 Rounds.
//  There Are Total n-1 Swaps. It Is Helpful When We Have To Perform Minimum Number Of Swaps.
//  Time Complexity :- O(n*n)
//  Space Complexity :- O(1)
//  Selection Sort Is USed When :-
//  # There Is A Cost Of Swapping
//  # We Have To Find k Minimum Elements From The Array.
//  # If The Size Of The Array Is Small.

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements Present In The Array : \n";
    cin>>n;
    int arr[n];
    cout<<"\nEnter The Elements Of The Array :\n";
    for (int i=0; i<n; i++) cin>>arr[i];
    cout<<"\nThe Elements Of The Array Are : \n";
    for (int i=0; i<n; i++) cout<<arr[i]<<"  ";

    // Selection Sort Algorithm :-
    // Worst Case Time Complexity :- O(n*n)
    // Best Case Time Complexity :- O(n*n)
    // Average Case Time Complexity :- O(n*n)
    // Space Complexity :- O(1)
    // There Is No Optimised Method For Selection Sort.
    // Selection Swap Is Unstable In Nature.

    for (int i=0; i<n-1; i++){
        int min=INT_MAX, min_index=0;
        for (int j=i; j<n; j++){
            if (arr[j] < min){
                min = arr[j];
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    cout<<"\n\nThe Elements of The Array In Sorted Order Are : \n";
    // For Each Loop.
    for (int i : arr) cout<<i<<"  ";
    // For Each int i In arr Print i+"  ".
    printf("\n\n");
    system("pause");
}