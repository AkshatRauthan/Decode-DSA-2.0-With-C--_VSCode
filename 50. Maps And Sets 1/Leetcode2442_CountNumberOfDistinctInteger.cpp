#include "iostream"
#include "unordered_set"
#include "vector"
using namespace std;

int countDistinctIntegers(vector<int>& v){
    if (v.empty()) return 0;
    unordered_set<int> s;
    for (int n : v){
        s.insert(n);
        int temp = n;
        n = 0;
        for (; temp; temp /= 10) n = n*10 + temp%10;
        s.insert(n);
    }
    return s.size();
}

int main(){
    cout<<"\n\nEnter The Number Of Elements Present In The Vector : \n";
    int n;
    cin>>n;
    vector<int> v(n);
    cout<<"\n\nEnter The "<<n<<" Elements Of The Vector :\n";
    for (int i=0; i<n; i++) cin>>v[i];
    int count = countDistinctIntegers(v);
    cout<<"\n\nThe Required Number Of Distinct Numbers Present In The Array Are : "<<count<<"\n\n";
    system("pause");
}