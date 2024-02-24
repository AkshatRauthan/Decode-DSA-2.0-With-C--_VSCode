#include "iostream"
#include "vector"
using namespace std;

vector<vector <int>> pascalTriangle(int n){
    vector<vector <int>> v;
    for (int i=0;i<n;i++){
        vector<int> temp(i+1,1);
        for (int j=0;j<=i;j++){
            if (j==0 || j==i) continue;
            else temp[j] = v[i-1][j]+v[i-1][j-1];
        }
        v.push_back(temp);
    }
    return v;
}

void display(vector<vector <int>> d,int n){
    cout<<"\nThe Requires Pascal's Triangle Is As Follows :\n\n";
    for (int i=0;i<n;i++) {
        for (int j=0;j<=i;j++) cout<<d[i][j]<<"  ";
        cout<<"\n";
    }
}

int main(){
    int a;
    cout<<"\nEnter The Number Of Rows Of Pascal's Triangle You Want To Print :\n";
    cin>>a;
    display(pascalTriangle(a),a);
    cout<<"\n\n";
    system("pause");
}