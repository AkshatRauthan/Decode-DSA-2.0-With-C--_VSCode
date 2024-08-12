#include "iostream"
#include "vector"
#include "unordered_map"
using namespace std;

vector<int> findEvenNumbers(vector<int>& v){
    if (v.empty()) return {};
    vector<int> ans;
    unordered_map<int,int> m;
    int mx = INT_MIN;
    for (int x : v){
        m[x]++;
        if (x > mx) mx = x;
    }
    mx = (mx+1)*100;
    for (int i=100; i<mx; i+=2){
        int a = i%10, b = (i/10)%10, c = i/100;
        if (a == b && b == c){
            if (m.find(a) != m.end() && m[a] > 2) ans.push_back(i);
        }
        else if (a == b || b == c || c == a){
            if (b == c) swap (c,a);
            else if (c == a) swap(c,b);
            if (m.find(a) != m.end() && m[a] >= 2 && m.find(c) != m.end()) ans.push_back(i);
        }
        else{
            if (m.find(a)!=m.end() && m.find(b)!=m.end() && m.find(c)!=m.end()) ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    cout<<"\nEnter The Number Of Elements In The Vector : \n";
    int n;
    cin>>n;
    cout<<"\n\nEnter The Elements Of The Vector : \n";
    vector<int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];
    vector<int> ans = findEvenNumbers(v);
    cout<<"\n\nAll The Three Digit Even Numbers That Can Be Formed From The Given Vector are : \n";
    for (int x : ans) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}