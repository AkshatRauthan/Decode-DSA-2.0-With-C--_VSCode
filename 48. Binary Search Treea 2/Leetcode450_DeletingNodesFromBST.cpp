#include "iostream"
#include "binaryTree"

// Deleting Nodes From A BST :-
// Case 1 : A Leaf Node.
// Case 2 : Having Only One Child Node.
// Case 3 : Having Both Left And Right Child Node.

// Solution :-
// In Case 1 : We Can Directly Replace The Node With A Null Pointer.
// In Case 2 : We Can Directly Replace The node With Its Child Node.
// In Case 3 : We Can Directly Replace The Value Of The Node With Its In-Order Predecessor/Successor
//             After Deleting The Respective In-Order Predecessor/Successor.

bool InorderPredecessor(treeNode* node, treeNode* &temp){
    if (node->left) node = node->left;
    else return false;
    while (node->right) node = node->right;
    temp = node;
    return true;
}
bool InorderSuccessor(treeNode* node, treeNode* &temp){
    if (node->right) node = node->right;
    else return false;
    while (node->left) node = node->left;
    temp = node;
    return true;
}
treeNode* deleteNode(treeNode* node, int& n){
    if (!node) return node;
    if (node->val == n){
        if (node->left && node->right){
            treeNode* temp;
            int a;
            if (InorderPredecessor(node,temp));
            else InorderSuccessor(node,temp);
            a = temp->val;
            node = deleteNode(node, a);
            node->val = a;
            return node;
        }
        if (node->left || node->right){
            if (node->left) return node->left;
            return node->right;
        }
        return nullptr;
    }
    if (node->val > n) node->left = deleteNode(node->left,n);
    node->right = deleteNode(node->right,n);
    return node;
}

int main(){
    vector<int> v = {10,5,20,2,8,15,25,INT_MIN,4,INT_MIN,INT_MIN,12};
    binaryTree b(v);
    cout<<"The Given Binary Search Tree Is : \n";
    b.displayTree();
    cout<<"\n\nEnter The Value Of The Node That You Want To Delete : \n";
    int n;
    cin>>n;
    deleteNode(b.root,n);
    cout<<"\n\nThe Binary Search Tree After Deleting The Given Node Is : \n";
    b.displayTree();
    cout<<"\n\n";
    system("pause");
}