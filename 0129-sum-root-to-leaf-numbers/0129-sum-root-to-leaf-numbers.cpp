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
    int sum(TreeNode* root, int currSum) {
        if (!root) return 0;

        currSum = currSum * 10 + root->val; // update the current path number

        // if it's a leaf node, return the number formed
        if (!root->left && !root->right) {
            return currSum;
        }

        // recurse left and right
        int leftSum = sum(root->left, currSum);
        int rightSum = sum(root->right, currSum);

        return leftSum + rightSum;
    }

    int sumNumbers(TreeNode* root) {
        return sum(root, 0);
    }
};