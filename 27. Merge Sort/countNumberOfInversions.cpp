#include "iostream"
#include "vector"
using namespace std;

int count = 0;

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
    int i=0, j=0;
    while (i < v1.size() || j < v2.size()){
        if (v1[i] > v2[j]){
            count += v1.size() - i;
            j++;
        }
        else i++;
    }
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
    cout<<"\nThe Number Of Inversions In The Given Vector  Are : "<<count;
    cout<<"\n\n";
    system("pause");
}