#include "iostream"
#include "unordered_set"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;

int maximumNumberOfStringPairs(vector<string>& v){
    if (v.empty()) return 0;
    int count = 0;
    unordered_set<string> s;
    for (string str : v){
        string rev = str;
        reverse(rev.begin(), rev.end());
        if (s.find(rev) == s.end()) s.insert(str);
        else count++;
    }
    return count;
}

int main(){
    cout<<"\n\nEnter The Number Of Strings In The Vector : \n";
    int n;
    cin>>n;
    vector<string> v(n);
    cout<<"\n\nEnter The "<<n<<" Strings Of The Vector : \n";
    for(int i=0; i<n; i++)cin>>v[i];
    int count = maximumNumberOfStringPairs(v);
    cout<<"\n\nThe Maximum Number Of Such Pairs Found Are : "<<count<<"\n\n";
    system("pause");
}