#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;

void rearrangeNodes(treeNode* node, vector<int>& v, int &idx){
    if (!node || idx > v.size()-1) return;
    node->val = v[idx];
    idx++;
    rearrangeNodes(node->left ,v,idx);
    rearrangeNodes(node->right,v,idx);
}

void inorder(treeNode* node, vector<int>& v){
    if (!node) return;
    inorder(node->left , v);
    v.push_back(node->val);
    inorder(node->right, v);
}

void BSTtoMinHeap(treeNode* &node){
    if (!node) return;
    vector<int> v;
    inorder(node, v);
    int idx = 0;
    rearrangeNodes(node,v,idx);
}

int main(){
    vector<int> v = {10,5,16,1,8,12,20};
    binaryTree t(v);
    cout<<"\n\nThe Given Binary Search Tree Is As Follows : \n";
    t.displayTree();
    BSTtoMinHeap(t.root);
    cout<<"\n\nThe Binary Search After Converting Into A Min-Heap Is As Follows : \n";
    t.displayTree();
    cout<<"\n\n";
    system("pause");
}
