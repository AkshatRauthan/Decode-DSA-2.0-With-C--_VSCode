#include "iostream"
#include "vector"
#include "binaryTree"
using namespace std;

int main(){
    vector<int> v = {8,4,12,2,6,10,14,1,3,5,7,9,11,13,15};
    binaryTree b(v);
    cout<<"The Binary Search Tree Is As Follows : \n";
    b.displayTree();
    cout<<"\n\nThe Pre-Order Traversal Of The Binary Search Tree Is : \n";
    displayPreOrder(b.root);
    cout<<"\n\nThe Reverse Pre-Order Traversal Of The Binary Search Tree Is : \n";
    displayPreOrder(b.root, true);
    cout<<"\n\n\nThe Post-Order Traversal Of The Binary Search Tree Is : \n";
    displayPostOrder(b.root);
    cout<<"\n\nThe Reverse Post-Order Traversal Of The Binary Search Tree Is : \n";
    displayPostOrder(b.root, true);
    cout<<"\n\n\nThe In-Order Traversal Of The Binary Search Tree Is : \n";
    displayInOrder(b.root);
    cout<<"\n\nThe Reverse In-Order Traversal Of The Binary Search Tree Is : \n";
    displayInOrder(b.root, true);
    cout<<"\n\nFrom This We Can Say That The In-Order Traversal Of A BST Is Always Sorted.";
    cout<<"\n\n";
    system("pause");
}