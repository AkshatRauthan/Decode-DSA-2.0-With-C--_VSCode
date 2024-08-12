#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

//  You are an awesome parent and want to give your children some cookies.
//  But, you should give each child at most one cookie.
//  Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with;
//  and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i,
//  and the child i will be content.
//  Your goal is to maximize the number of your content children and output the maximum number.

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int n=g.size(), m=s.size();
    int max_child=0;
    for (int i=0, j=0; i<n && j<m;){
        if (g[i] <= s[j]) {
            max_child++;
            i++;
            j++;
        }
        else j++;
    }
    return max_child;
}

int main(){
    int n, m;
    cout<<"\nEnter The Total Number Of Children : \n";
    cin>>n;
    vector<int> g(n);
    cout<<"\nEnter The Greed Factors Of All The "<<n<<" Children : \n";
    for (int i=0; i<n; i++) cin>>g[i];
    cout<<"\n\nEnter The Total Number Of Cookies : \n";
    cin>>m;
    vector<int> s(m);
    cout<<"\nEnter The Size Of All The "<<m<<" Cookies : \n";
    for (int i=0; i<m; i++) cin>>s[i];
    int max_child = findContentChildren(g, s);
    cout<<"\nThe Maximum Number Of Content Children Are : "<<max_child<<"\n\n\n";
    system("pause");
}
