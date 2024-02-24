#include "vector"
#include "iostream"
#include "binaryTree"
using namespace std;

treeNode* searchBST(treeNode* &root, int& val) {
    if (!root || root->val == val) return root;
    else if (root->val > val) return searchBST(root->left,val);
    return searchBST(root->right,val);
}
int main(){
    vector<int> v = {10,5,15,2,8,12,18,INT_MIN,INT_MIN,6,INT_MIN,INT_MIN,13};
    binaryTree t(v);
    cout<<"\nThe Given Binary Search Tree Is As Follows : \n";
    t.displayTree();
    cout<<"\nEnter The Value Of The Node You Want To Search : \n";
    int val;
    cin>>val;
    treeNode* node = searchBST(t.root, val);
    if (node) cout<<"\nYes, The Given Value Is Present In The Binary Search Tree.";
    else cout<<"\nNo, The Given Value Is Not Present In The Binary Search Tree.";
    cout<<"\n\n";
    system("pause");
}