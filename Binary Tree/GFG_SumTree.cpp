#include <iostream>
#include <queue>
using namespace std;

class Solution
{
public:
    pair<bool, int> isSumTreefast(Node *root)
    {
        // base case
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        if (root->left == NULL && root->right == NULL)
        {
            pair<bool, int> p = make_pair(true, root->data);
            return p;
        }

        pair<bool, int> leftAns = isSumTreefast(root->left);
        pair<bool, int> rightAns = isSumTreefast(root->right);

        bool left = leftAns.first;
        bool right = rightAns.first;

        bool cond = root->data == leftAns.second + rightAns.second;
        pair<bool, int> ans;

        if (left && right && cond)
        {
            ans.first = true;
            ans.second = 2 * root->data;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }
    bool isSumTree(Node *root)
    {
        return isSumTreefast(root).first;
    }
};