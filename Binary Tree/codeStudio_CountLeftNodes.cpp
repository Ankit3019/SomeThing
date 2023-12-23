#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void inOrder(BinaryTreeNode<int> *root, int &count)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left, count);
    // left node
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    inOrder(root->right, count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    int cnt = 0;
    inOrder(root, cnt);
    return cnt;
}