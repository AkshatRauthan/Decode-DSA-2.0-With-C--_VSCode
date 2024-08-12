#include "iostream"
#include "stack"
#include "vector"
using namespace std;

void previousSmallerElement(vector<int>& v, vector<int>& pse){
    stack<int> st;
    st.push(0);
    for (int i=1; i<v.size(); i++){
        while(st.size() != 0 && v[i] < v[st.top()]) st.pop();
        if (st.size() != 0) pse[i] = st.top();
        st.push(i);
    }
}

void nextSmallerElement(vector<int>& v, vector<int>& nse){
    stack<int> st;
    st.push(v.size()-1);
    for (int i=v.size()-1; i>0; i--){
        while (st.size() != 0 && v[i] <= v[st.top()]) st.pop();
        if (st.size() != 0) nse[i] = st.top();
        else nse[i] = v.size();
        st.push(i);
    }
}

int largestAreaRectangle(vector<int>& v){
    int maxArea = 0;
    vector<int> pse(v.size(),-1), nse(v.size(),v.size()); // Previous Smaller Element & Next Smaller Element
    previousSmallerElement(v, pse);
    nextSmallerElement(v,nse);
    for (int i=0; i<v.size(); i++){

    }
    return maxArea;
}

int main(){
    int n;
    cout<<"\nEnter The Number Of Bars Present In The Histogram :\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Height Of The "<<n<<" Bars : \n";
    for (int i=0; i<n; i++) cin>>v[i];
    cout<<"\nThe Next Smallest Element : \n";
    int area = largestAreaRectangle(v);
    cout<<"\n\nThe Maximum Area Is : "<<area;
    cout<<"\n";
    system("pause");
}