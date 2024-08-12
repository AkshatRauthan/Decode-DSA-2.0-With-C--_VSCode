#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;

void insertIntoBST(treeNode* &node, int &val){
    if (!node){
        treeNode* temp = new treeNode(val);
        node = temp;
        return;
    }
    if (node->val > val) return insertIntoBST(node->left, val);
    return insertIntoBST(node->right, val);
}

int main(){
    vector<int> v = {10,5,15,2,8,12,18,INT_MIN,INT_MIN,6,INT_MIN,INT_MIN,13};
    binaryTree t(v);
    cout<<"\nThe Binary Search tree Is As Follows : \n";
    t.displayTree();
    cout<<"\nEnter The Value You Want To Insert : \n";
    int val;
    cin>>val;
    insertIntoBST(t.root,val);
    cout<<"\nThe Binary Search Tree After Inserting The Node Is As Follows : \n";
    t.displayTree();
    cout<<"\n\n";
    system("pause");
}