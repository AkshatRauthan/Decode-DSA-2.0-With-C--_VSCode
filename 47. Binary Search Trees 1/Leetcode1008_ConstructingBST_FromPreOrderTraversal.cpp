#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;

treeNode* helper(vector<int>& v, int i, int j){
    cout<<i<<"  "<<j<<endl;
    if (i > j || i>=v.size() || j>=v.size()) return nullptr;
    treeNode* node = new treeNode(v[i]);
    if (i == j) return node;
    int n = i;
    while (v[n] <= v[i] && n<=j) n++;
    node->left  = helper(v, i+1,n-1);
    node->right = helper(v, n,  j);
    return node;
}
treeNode* bstFromPreorder(vector<int>& v){
    if (v.empty()) return nullptr;
    return helper(v,0,v.size()-1);
}
int main(){
    vector<int> v = {4,2};
            //{16,8,4,2,1,3,6,5,7,12,10,9,11,14,13,15,24,20,18,17,19,22,21,23,28,26,25,27,30,29,31};
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