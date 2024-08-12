#include "iostream"
#include "binaryTree"
using namespace std;

// In-Order Predecessor : The Node That Comes Before The Current Node In In-Order Traversal.

// In In-Order Traversal The Left Sub-Tree Is Traversed First While The Right Sub-Tree Is Traversed Last.
// Therefore, The In-Order Predecessor Is The Rightmost Node Of The Head Of The Left Sub-Tree.

// Finding In-Order Predecessor :-
// Go Left From The Node Once And Then Keep Moving Right Until The Right Of The Current Node Is Not Null.
// The Node which Do Not Have A Right Node Will Be The Required In-Order Predecessor.


// In-Order Successor : The Node That Comes After The Current Node In In-Order Traversal.

// In In-Order Traversal The Left Sub-Tree Is Traversed First While The Right Sub-Tree Is Traversed Last.
// Therefore, The In-Order Successor Is The Leftmost Node Of The Head Of The Right Sub-Tree.

// Finding In-Order Successor :-
// Go Right From The Node Once And Then Keep Moving Left Until The Left Of The Current Node Is Not Null.
// The Node which Do Not Have A Left Will Be The Required In-Order Predecessor.

treeNode* findInBST(treeNode* node, int& n){
    if (!node) return nullptr;
    if (node->val == n) return node;
    return findInBST(node->left, n), findInBST(node->right, n);
}
treeNode* InorderPredecessor(treeNode* node){
    if (node && node->left) node = node->left;
    else return nullptr;
    while (node->right) node = node->right;
    return node;
}
treeNode* InorderSuccessor(treeNode* node){
    if (node && right) node = node->right;
    else return nullptr;
    while (node->left) node = node->left;
    return node;
}
int main(){
    vector<int> v = {10,5,20,2,8,15,25,INT_MIN,4,INT_MIN,INT_MIN,12,INT_MIN,INT_MIN,INT_MIN,3,INT_MIN,INT_MIN,13};
    binaryTree b(v);
    cout<<"The Given Binary Search Tree Is : \n\n";
    b.displayTree();
    cout<<"\n\nEnter The Value Of The Node Whose In-Order Successor And Predecessor You Want To Find : \n";
    int n;
    cin>>n;
    treeNode* node = findInBST(b.root, n);
    treeNode* preNode = InorderPredecessor(node);
    treeNode* sucNode = InorderSuccessor(node);
    if (preNode) cout<<"\n\nThe Value Of The In-Order Predecessor of The Given Node Is : "<<preNode->val;
    if (sucNode) cout<<"\n\nThe Value Of The In-Order Successor of The Given Node Is : "<<sucNode->val;
    cout<<"\n\n";
    system("pause");
}