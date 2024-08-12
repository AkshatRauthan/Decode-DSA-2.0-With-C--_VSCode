#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;

void insertIntoBST(treeNode* &node, int& val){
    if (!node) {
        node = new treeNode(val);
        return;
    }
    if (node->val < val) return insertIntoBST(node->right, val);
    return insertIntoBST(node->left, val);
}

treeNode* bstFromPreorder(vector<int>& v){
    if (v.empty()) return nullptr;
    treeNode* node = new treeNode(v[0]);
    for (int i=1; i<v.size(); i++) insertIntoBST(node, v[i]);
    return node;
}
int main(){
    vector<int> v = {16,8,4,2,1,3,6,5,7,12,10,9,11,14,13,15,24,20,18,17,19,22,21,23,28,26,25,27,30,29,31};
    binaryTree t;
    t.root = bstFromPreorder(v);
    cout<<"\n\nThe Binary Search Tree Is As Follows : \n";
    t.displayTree();
    cout<<"\n\n";
    cout<<"The In-Order Traversal Of The BST Is : \n";
    displayInOrder(t.root);
    cout<<"\n\n";
    system("pause");
}