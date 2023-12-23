#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Binary Tree Node Definition
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTreeConstructor
{
private:
    unordered_map<int, int> indexMap; // Map to store indices of in-order elements

public:
    // Function to construct a binary tree from in-order and pre-order traversals
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        // Populate the indexMap with in-order elements and their indices
        for (int i = 0; i < inorder.size(); ++i)
        {
            indexMap[inorder[i]] = i;
        }

        // Start building the tree using recursive helper function
        return buildTreeHelper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }

private:
    // Recursive helper function for building the binary tree
    TreeNode *buildTreeHelper(vector<int> &preorder, int preStart, int preEnd,
                              vector<int> &inorder, int inStart, int inEnd)
    {
        // Base case: empty range
        if (preStart > preEnd || inStart > inEnd)
        {
            return nullptr;
        }

        // Create the root node from the current element in pre-order traversal
        int rootValue = preorder[preStart];
        TreeNode *root = new TreeNode(rootValue);

        // Find the index of the root in in-order traversal
        int rootIndex = indexMap[rootValue];

        // Calculate the number of elements in the left subtree
        int leftSubtreeSize = rootIndex - inStart;

        // Recursively build left and right subtrees
        root->left = buildTreeHelper(preorder, preStart + 1, preStart + leftSubtreeSize,
                                     inorder, inStart, rootIndex - 1);
        root->right = buildTreeHelper(preorder, preStart + leftSubtreeSize + 1, preEnd,
                                      inorder, rootIndex + 1, inEnd);

        return root;
    }
};

// Function to perform in-order traversal of the constructed binary tree
void inorderTraversal(TreeNode *root)
{
    if (root)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

// Main function
int main()
{
    // Example: Constructing a binary tree
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    BinaryTreeConstructor treeConstructor;
    TreeNode *root = treeConstructor.buildTree(preorder, inorder);

    // Perform in-order traversal to verify the constructed tree
    cout << "In-order traversal of the constructed tree: ";
    inorderTraversal(root);

    return 0;
}
