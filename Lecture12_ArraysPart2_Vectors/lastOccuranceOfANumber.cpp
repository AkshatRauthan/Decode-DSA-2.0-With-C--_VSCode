#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);v.push_back(4);v.push_back(3);v.push_back(8);v.push_back(2);
    v.push_back(7);v.push_back(9);v.push_back(3);v.push_back(2);v.push_back(6);v.push_back(1);
    v.push_back(5);v.push_back(7);v.push_back(1);v.push_back(9);v.push_back(4);
    int x,i=-1;
    cout<<"Enter The Element Whose Last Occurrence You Want To Find :\n";
    cin>>x;
    cout<<"\n";
    for(i=v.size()-1;i>=0;i--){
        if (x==v[i]) {
            break;
        }
    }
    if (i!=-1) cout<<"The Last Occurrence Of "<<x<<" In The Vector Is At "<<i<<"th Index\n";
    else cout<<"Oops! The Given Element "<<x<<" Is Not Present In The Vector\n";
}
