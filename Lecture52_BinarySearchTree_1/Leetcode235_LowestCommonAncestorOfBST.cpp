#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;

treeNode* lowestCommonAncestor(treeNode* &root, treeNode* &p, treeNode* &q) {
    if (root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left,  p, q);
    if (root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
    return root;
}

int main(){
    vector<int> v= {8,4,12,2,6,10,14,1,3,5,7,9,11,13,15};
    binaryTree t(v);
    cout<<"\nThe Binary Search Tree Is As Follows : \n";
    t.displayTree();
    treeNode* p = t.root->left->left->left;
    treeNode* q = t.root->left->right->left;
    cout<<"\nThe Given Two Nodes Are "<<p->val<<" And "<<q->val;
    treeNode* ans = lowestCommonAncestor(t.root, p, q);
    cout<<"\n\nThe Lowest Common Ancestor Of The Given Two Nodes Is : "<<ans->val;
    cout<<"\n\n";
    system("pause");
}