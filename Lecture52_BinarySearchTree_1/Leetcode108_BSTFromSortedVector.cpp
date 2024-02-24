#include "iostream"
#include "binaryTree"
#include "vector"
using namespace std;
treeNode* helper(vector<int> &v, int i, int j){
    if (i > j) return nullptr;
    if (i == j){
        treeNode* temp = new treeNode(v[i]);
        return temp;
    }
    int mid = (i + j)/2;
    treeNode* temp = new treeNode(v[mid]);
    temp->left = helper(v,i,mid-1);
    temp->right = helper(v,mid+1,j);
    return temp;
}
treeNode* sortedArrayToBST(vector<int>& v) {
    if (v.empty()){
        treeNode* temp = nullptr;
        return temp;
    }
    return helper(v, 0 ,v.size()-1);
}
int main(){
    // The Vector Should Be Sorted In Ascending Order.
    vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    cout<<"\nThe Given Sorted Array Is : \n";
    for (int x : v) cout<<x<<" ";
    binaryTree t;
    t.root = sortedArrayToBST(v);
    cout<<"\n\nThe Required Balanced Binary Search Tree Is : \n";
    t.displayTree();
    cout<<"\n\nThe In-Order Display Of The Constructed BST Is : \n";
    displayInOrder(t.root);
    cout<<"\n\n";
    system("pause");
}