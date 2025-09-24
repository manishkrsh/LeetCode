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
    int height(TreeNode* root){
        if(root==NULL)return 0;

        int leftHt= height(root->left);
        int rightHt = height(root->right); 
        return max(leftHt,rightHt)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;

        int leftDiam = diameterOfBinaryTree(root->left);
        int rightDiam = diameterOfBinaryTree(root->right);
        int currDiam = height(root->left)+ height(root->right);
        return max(currDiam, max(leftDiam, rightDiam));
    }
};