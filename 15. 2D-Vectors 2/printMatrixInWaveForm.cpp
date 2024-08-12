#include "iostream"
using namespace std;
int main(){
    int p,q,temp=0;
    cout<<"Enter The Number Of Rows Present In The Matrix :\n";
    cin>>p;
    cout<<"Enter The Number Of Columns Present In The Matrix :\n";
    cin>>q;
    int matrix[p][q];
    cout<<"Enter The "<<p*q<<" Elements Of The Matrix :\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin>>temp;
            matrix[i][j]=temp;
        }
    }
    cout<<"THe Element In Wave form Is :\n";
    for (int i=0;i<p;i++){
        if (i%2==0) {
            for (int j=0;j<q;j++){
                cout<<matrix[i][j]<<"  ";
            }
        }
        else {
            for (int j = q-1; j>=0; j--) {
                cout << matrix[i][j] << "  ";
            }
        }
    }
    system("pause");
}