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
class Solution 
{

public:

    int solve(TreeNode* root,int& count,int k)
    {
        //base case...
        if(root==NULL)
        {
            return -1;
        }

        //L
        int left = solve(root->left,count,k);
        if(left!=-1)
        {
            return left;
        }

        //N
        count++;
        if(count==k)
        {
            return root->val;
        }

        //R
        return solve(root->right,count,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int ans = solve(root,count,k);
        return ans;
    }
};