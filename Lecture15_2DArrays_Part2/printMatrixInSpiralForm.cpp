// Leetcode Question 54 :-
#include "iostream"
#include "vector"
using namespace std;

vector<vector<int>> initialize(){
    int p, q,temp;
    cout << "Enter The Number Of Rows :\n";
    cin >> p;
    cout << "Enter The Number Of Columns :\n";
    cin >> q;
    vector<vector <int>> v(p,vector<int> (q,0));
    cout << "Enter The " << p * q << " Elements Of The Matrix :\n";
    for (int i=0;i<p;i++){
        for (int j=0;j<q;j++){
            cin>>temp;
            v[i][j]=temp;
        }
    }
    return v;
}

void display(vector<vector<int>> v1,int r,int c){
    cout<<"\nThe Entered Matrix Is As Follows :\n";
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<v1[i][j]<<"  ";
        }
        cout<<"\n";
    }
}

vector<int> displayInSpiralForm(vector<vector<int>> v1,int p,int q){
    int minr=0, maxr=p-1, minc=0, maxc=q-1;
    vector <int> v;
    while (minr<=maxr && minc<=maxc){
        // Top Row
        for (int i=minc;i<=maxc;i++) v.push_back(v1[minr][i]);
        minr++;

        // Rightmost Column
        if (minr>maxr || minc>maxc) break;
        for (int i=minr;i<=maxr;i++) v.push_back(v1[i][maxc]);
        maxc--;

        // Bottom Row In Reverse
        if (minr>maxr || minc>maxc) break;
        for (int i=maxc;i>=minc;i--) v.push_back(v1[maxr][i]);
        maxr--;

        // Leftmost Column In Reverse
        if (minr>maxr || minc>maxc) break;
        for (int i=maxr;i>=minr;i--) v.push_back(v1[i][minc]);
        minc++;
    }
    return v;
}

int main() {
    vector<vector<int>> v = initialize();
    display(v,v.size(),v[0].size());
    vector<int> v_spiral = displayInSpiralForm(v,v.size(),v[0].size());
    cout<<"\nThe Given Matrix In Spiral Form Is As Follows :\n";
    for (int i=0;i<v_spiral.size();i++) cout<<v_spiral[i]<<"  ";
    cout<<"\n\n";
    system("pause");
}