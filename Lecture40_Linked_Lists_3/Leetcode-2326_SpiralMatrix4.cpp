#include "iostream"
#include "linkedlist"
#include "vector"
using namespace std;
LinkedList l1;

void spiralMatrix(Node* head, vector<vector <int>>& v){
    Node* temp = head;
    int ns=0, ne=v.size()-1, ms=0, me = v[0].size()-1;
    int n= v.size() * v[0].size(), count = 0;
    for (int i=0; !(ne<=ns || ms>=me); i++){
        cout<<"\n"<<i<<"\n";
        // Inserting Element In Top-Most Row.
        for (int j=ms; j<me; j++,count++){
            v[ns][j] = temp->val;
            temp = temp->next;
        } ns++;
        if (count >= n) break;

        // Inserting Element In The Right-Most Column.
        for (int j=ns; j<ne; j++,count++){
            v[j][me] = temp->val;
            temp = temp->next;
        } me--;
        if (count >= n) break;

        // Inserting Element In The Bottom-Most Row.
        for (int j=me; j>ms; j--,count++){
            v[ne][j] = temp->val;
            temp = temp->next;
        } ne--;
        if (count >= n) break;

        // Inserting Element In The Left-Most Column.
        for (int j=ne; j>ns; j--,count++){
            v[j][ms] = temp->val;
            temp = temp->next;
        } ms++;
        if (count >= n) break;
    }
}

int main(){
    int nr, nc;
    cout<<"\nEnter The Number Of Rows Present In Vector : \n";
    cin>>nr;
    cout<<"\nEnter The Number Of Columns Present In Vector : \n";
    cin>>nc;
    vector< vector<int>> v(nr, vector<int>(nc, 0));
    initializeLinkedList(l1,nc*nr);
    spiralMatrix(l1.head, v);
    l1.display();
    cout<<"\nThe Given Linked List In Spiral Form Is : \n";
    for (int i=0; i<v.size(); i++){
        for (int j=0; j<v[0].size(); j++) cout<<v[i][j]<<"  ";
        cout<<"\n";
    }
    cout<<"\n\n";
    system("pause");
}