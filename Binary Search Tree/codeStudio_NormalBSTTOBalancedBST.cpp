#include <iostream>
#include <vector>
using namespace std;

void inorder(TreeNode<int> *root, vector<int> &in)
{
    if (root == NULL)
        return;
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

TreeNode<int> *inorderToBSt(int s, int e, vector<int> &in)
{
    // base case
    if (s > e)
        return NULL;
    int mid = (s + e) / 2;
    TreeNode<int> *root = new TreeNode<int>(in[mid]);
    root->left = inorderToBST(s, mid - 1, in);
    root->right = inorderToBST(mid + 1, e, in);
    return root;
}
TreeNode<int> *balancedBSt(TreeNode<int> *root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);

    return inorderToBST(0, inorderVal.size() - 1, inorderVal);
}