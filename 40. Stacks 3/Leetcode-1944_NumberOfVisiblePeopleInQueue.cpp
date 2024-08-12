#include "iostream"
#include "stack"
#include "vector"
using namespace std;

void canSeePersonsCount(vector<int>& v, vector<int>& count){
    stack<int> st;
    int n;
    st.push(v[v.size()-1]);
    for (int i=v.size()-2; i>-1; i--){
        n = 0;
        while (st.size()!=0 && v[st.top()] <= v[i]){
            n++;
            if (v[st.top()] == v[i]) break;
            st.pop();
        }
        count[i] = n;
        st.push(v[i]);
    }
}

int main(){
    vector<int> v = {10,6,8,5,11,9};
    vector<int> count(v.size(),0);
    canSeePersonsCount(v, count);
    cout<<"\nThe Number Of Persons That Can Be Seen By The Respective Persons Are :\n";
    for (int x : count) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
    return 0;
}