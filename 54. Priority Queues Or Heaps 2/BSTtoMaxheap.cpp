#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;

// Here The Heap Will Be Formed Within The Binary Tree.
// Simply, We Will Rearrange The Values Of The BST To Form A Max Heap.

void rearrangeNodes(treeNode* node, vector<int>& v, int &idx){
    if (!node || idx > v.size()-1) return;
    node->val = v[idx];
    idx++;
    rearrangeNodes(node->left,v,idx);
    rearrangeNodes(node->right,v,idx);
}

void reverseInorder(treeNode* node, vector<int>& v){
    if (!node) return;
    reverseInorder(node->right,v);
    v.push_back(node->val);
    reverseInorder(node->left,v);
}

void BSTtoMaxHeap(treeNode* &node){
    if (!node) return;
    vector<int> v;
    reverseInorder(node,v);
    int idx = 0;
    rearrangeNodes(node,v,idx);
}

int main(){
    vector<int> v = {10,5,16,1,8,12,20};
    binaryTree t(v);
    cout<<"\n\nThe Given Binary Search Tree Is As Follows : \n";
    t.displayTree();
    BSTtoMaxHeap(t.root);
    cout<<"\n\nThe Binary Search After Converting Into A Max-Heap Is As Follows : \n";
    t.displayTree();
    cout<<"\n\n";
    system("pause");
}
