#include "iostream"
#include "binaryTree"
using namespace std;

treeNode* trimBST(treeNode* &node, int& low, int& high){
    if (!node) return nullptr;
    else if (node->val < low){
        node = node->right;
        trimBST(node, low, high);
    }
    else if (node->val > high){
        node = node->left;
        trimBST(node, low, high);
    }
    else{
        trimBST(node->left , low, high);
        trimBST(node->right, low, high);
    }
    return node;
}

int main(){
    vector<int> v = {10,5,15,3,8,12,20,INT_MIN,INT_MIN,6,INT_MIN,INT_MIN,13};
    cout<<"\n\nThe Given Binary Search Tree Is As Follows : \n";
    binaryTree b(v);
    b.displayTree();
    int low, high;
    cout<<"\n\nEnter The Lower Bound Value For The Given BST : \n";
    cin>>low;
    cout<<"\n\nEnter The Upper Bound Value For The Given BST : \n";
    cin>>high;
    b.root = trimBST(b.root, low, high);
    cout<<"\n\nThe Binary Search Tree After Trimming Is As Follows : \n";
    b.displayTree();
    cout<<"\n\n";
    system("pause");
}