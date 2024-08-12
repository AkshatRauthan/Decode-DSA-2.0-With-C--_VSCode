#include "iostream"
#include "vector"
using namespace std;

void initialize(vector<int> &v){
    for (int i=0; i<v.size(); i++) cin>>v[i];
}

vector<int> answer;

void firstNegativeOfAllWindows(vector<int>& v, int k){
    int prevNegIdx = 0;
    for (int i=0; i<k; i++) if (v[i] < 0){
        prevNegIdx = i;
        answer.push_back(v[i]);
        break;
    }
    for (int i=1, j=k; j<v.size(); i++, j++){
        if (prevNegIdx < i) for (int a=i; a<j+1; a++) if (v[a] < 0) {
                prevNegIdx = a;
                break;
            }
        answer.push_back(v[prevNegIdx]);
    }
}

int main(){
    int n;
    cout<<"\nEnter The Size Of The Vector : \n";
    cin>>n;
    vector<int> v(n,0);
    cout<<"\nEnter The Elements Of The Vector :\n";
    initialize(v);
    cout<<"\nEnter The Size Of Windows In Which You Want To Search First Negative Number :\n";
    int k;
    cin>>k;
    firstNegativeOfAllWindows(v, k);
    cout<<"\nThe First Negative Number Of Every Window Of Size "<<k<<" In The Given Vector Are :\n";
    for (int x : answer) cout<<x<<"  ";
    cout<<"\n\n";
    system("pause");
}