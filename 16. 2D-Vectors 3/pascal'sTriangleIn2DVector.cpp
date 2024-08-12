#include "iostream"
#include "vector"
using namespace std;

float combination(int n,int r){
    if (n == r && r == 0) return 1.0;
    float result = 1;
    for (int i=n;i!=(n-r);i--) result *= i;
    for (int i=1;i<=r;i++) result /= i;
    return result;
}

vector<vector <float>> pascalTriangle(int n){
    vector<vector <float>> v;
    for (int i=0;i<n;i++){
        vector<float> temp;
        for (int j=0;j<=i;j++) temp.push_back(combination(i,j));
        v.push_back(temp);
    }
    return v;
}

void display(vector<vector <float>> d,int n){
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