#include "iostream"
#include "stack"
#include "vector"
using namespace std;

void nextGreatestElement(vector<int>& v, vector<int>& ans){
    int n = v.size();
    stack<int> st;
    st.push(v[n-1]);
    for (int i=n-2; i>=0; i--){
        while (st.size() != 0 && st.top() <= v[i]) st.pop();
        if (st.size() != 0) ans[i] = st.top();
        st.push(v[i]);
    }
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Elements :\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The "<<n<<" Elements :\n";
    for (int i=0; i<n; i++) cin>>v[i];
    vector<int> ans(n,-1);
    nextGreatestElement(v, ans);
    cout<<"\nThe Entered Elements Are :\n";
    for (int x : v) cout<<x<<"  ";
    cout<<"\n\nThe Next Greatest Element Fr The Respective Elements Are : \n";
    for (int x : ans) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}