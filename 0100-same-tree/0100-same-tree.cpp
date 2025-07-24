/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Case 1: Both nodes are null → trees match here
        if (p == nullptr && q == nullptr)
            return true;

        // Case 2: One is null, the other is not → mismatch
        if (p == nullptr || q == nullptr)
            return false;

        // Case 3: Values are different → mismatch
        if (p->val != q->val)
            return false;

        // Recurse on left and right subtrees
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};