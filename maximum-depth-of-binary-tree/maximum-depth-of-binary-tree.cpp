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
    int maxDepth(TreeNode* root) {

        //base case ...
        if(root == 0)
        {
            return 0; //function call return int...
        }

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);

        int ans = max(leftHeight,rightHeight)+1;
        return ans;
    }
};