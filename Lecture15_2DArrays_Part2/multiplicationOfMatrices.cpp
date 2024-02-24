#include "iostream"
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"Enter The Number Of Rows Present In The 1st Matrix :\n";
    cin>>m;
    cout<<"Enter The Number Of Columns Present In The 1st Matrix :\n";
    cin>>n;
    cout<<"Enter The Number Of Rows Present In The 2nd Matrix :\n";
    cin>>p;
    cout<<"Enter The Number Of Columns Present In The 2nd Matrix :\n";
    cin>>q;
    if (n != p){
        cout<<"\nMatrix Multiplication Is Not Possible Between Matrices Of The Given Order.\n";
    }
    else {
        int temp = 0;
        int row[m][n];
        int column[p][q];
        int final[m][q];
        // Taking Elements Of 1st Matrix As Input.
        cout<<"Enter The "<<m*n<<" Elements Of The 1st Matrix :\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin>>temp;
                row[i][j]=temp;
            }
        }
        // Taking Elements Of 2nd Matrix As Input.
        cout<<"Enter The "<<p*q<<" Elements Of The 2nd Matrix :\n";
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cin>>temp;
                row[i][j]=temp;
            }
        }
        // Multiplying Both Matrices And Storing The Result In 'final' Matrix.
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                temp = 0;
                for (int k = 0; k < n; k++) {
                    temp += row[i][k] * column[k][j];
                }
                final[i][j] = temp;
            }
        }
        // Displaying The Final Matrix.
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << final[i][j] << "  ";
            }
            cout << "\n";
        }
    }
    system("pause");
}