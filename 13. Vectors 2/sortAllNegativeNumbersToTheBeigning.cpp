#include "iostream"
#include "vector"
using namespace std;

void sortNeg(vector<int> &v){
    int i=0,j=v.size()-1,temp;
    while (j>i){
        if (v[i]<0) i++;
        if (v[j]>=0) j--;
        if (v[i]>=0 && v[j]<0 && j>i){
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
}

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    cout<<"\n\n";
}

void initialize(vector<int> &a) {
    int n, x;
    cout << "\nEnter The Number Of Elements In The Target Vector :\n";
    cin >> n;
    cout << "\nEnter The Elements Of The Target Vector Separated By Whitespaces \n";
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.push_back(x);
    }
}

int main(){
    vector<int> v;
    initialize(v);
    cout << "\nThe Given Array Is :\n";
    display(v);
    cout << "\n\nThe Sorted Array Is :\n" ;
    sortNeg(v);
    display(v);
    system("pause");
}