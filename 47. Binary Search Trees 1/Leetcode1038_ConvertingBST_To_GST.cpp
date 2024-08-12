// GST : Greater Sum Tree : Replace The Value Of Every Node Of A BST With The Sum Of All The Values
//       Greater Than It Along With Their Original Value.

#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;
int currSum = 0;
treeNode* bstToGst(treeNode* node) {
    if (!node) return node;
    bstToGst(node->right);
    currSum += node->val;
    node->val = currSum;
    bstToGst(node->left);
    return node;
}

int main(){
    vector<int> v = {4,1,6,0,2,5,7,INT_MIN,INT_MIN,INT_MIN,3,INT_MIN,INT_MIN,INT_MIN,8};
    binaryTree t(v);
    cout<<"\nThe Given Binary Tree Is : \n";
    t.displayTree();
    cout<<"\n\nThe Corresponding Greater Sum Tree For The Given BST Is As Follows : \n";
    bstToGst(t.root);
    t.displayTree();
    cout<<"\n\n";
    system("pause");
}