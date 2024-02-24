#include "iostream"
#include "vector"
using namespace std;

//                                      ______ Merge Sort Algorithm _______
// In The Function MergeSort We Are Breaking The Vector Into Two Parts Recursively Until We Got Two Individual
// Elements. Then We Pass The Two Individual Elements Into Function Merge That Will Merge Them After Sorting In
// A Single Vector. Then The Function Will Return The Vector Of The Two Elements And Then This Vector Will Again
// Be Passed In Merge Function With Another Vector And This Will Continue Until We Get The Fully Sorted Vector.

// Time Complexity : O(n*log(n))
// Space Complexity : O(n)
// No. Of Operations : 2*n*log(2) [Base 2]

// Applications :-
// i) Used To Sort Linked Lists.
// ii) Used In Count Inversion Problems.

void initialize(int num, vector<int>& v){
    for (int i=0; i<num; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
}

void merge(vector<int>& v1, vector<int>& v2, vector<int>& v){
    int i=0, j=0, k=0;
    while (i<v1.size() || j<v2.size()){
        if (v1[i] >= v2[j] || i >= v1.size()){
            v[k] = v2[j];
            j++;
        }
        else if (v1[i] < v2[j] || j >= v2.size()){
            v[k] = v1[i];
            i++;
        }
        k++;
    }
}

void mergeSort(vector<int>& v){
    int n = v.size();
    if (n == 1) return;
    int n1 = n/2, n2 = n - n1;
    vector<int> v1(n1,0), v2(n2,0);
    for (int i=0; i<n1; i++) v1[i] = v[i];
    for (int i=0; i<n2; i++) v2[i] = v[i+n1];
    mergeSort(v1);
    mergeSort(v2);
    merge(v1,v2,v);
    v1.clear();
    v2.clear();
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector :\n";
    cin>>n;
    cout<<"\nEnter The Elements Of The Vector : \n";
    vector<int> v;
    initialize(n,v);
    mergeSort(v);
    cout<<"\nThe Elements Of The Final Vector After Merge Sort Are : \n";
    for (int x : v) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}