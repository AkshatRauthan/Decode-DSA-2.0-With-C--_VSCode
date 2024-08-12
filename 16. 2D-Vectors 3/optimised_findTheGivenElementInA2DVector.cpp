#include "algorithm"
#include "iostream"
#include "vector"
using namespace std;

// Assume The Given Vector Is Sorted Both Column-wise And Row-wise.

//  Algorithm :-
//  Start From The Top-right Element
//  If  ( Top-right Element > target ) Then Go Left ; Else Go Down
//  Again If ( Element > target ) Then Go Left ; Else Go Down ; And Continue Same Pattern.
//  Whenever ( Element == target ) Return True.
//  If Target Is Not Found And Indices Go Out Of Vector Break Loop And return False.

void display(vector<vector <int>> &v){
    cout<<"\nThe Given 2D Vector Is :\n";
    for (int i=0;i<v.size();i++) {
        for (int j=0;j<v[0].size();j++) cout<<v[i][j]<<"  ";
        cout<<"\n";
    }
}

bool searchMatrix(vector<vector <int>>&v,int x){
    int nr = v.size();
    int nc = v[0].size();
    int i = 0, j = nc-1;
    while (i<nr && j>=0){
        if (v[i][j]==x) return true;
        else if (v[i][j] > x) j--;
        else i++;
    }
    return false;
}

int main(){
    vector<vector <int>> v = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    display(v);
    cout<<"\nEnter The Integer You Want to Search In It :\n";
    int a;
    cin>>a;
    bool b = searchMatrix(v,a);
    if (b) cout<<"\nYes, The Element Is Present In The Given Vector\n\n";
    else cout<<"\nNo, The Element Is Not Present In The Given Vector\n\n";
    system("pause");
}
