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

    void solve(TreeNode* root, int targetSum,vector<int> path,vector<vector<int> > &ans,int currentSum)
    {
        //base case ...
        if(root==NULL )
        {
            return;
        }

        //Leaf Node...
        if(root->left == NULL  && root->right==NULL)
        {
              path.push_back(root->val);
             currentSum += root->val;

            if(currentSum == targetSum)
            {
                ans.push_back(path);
            }
                return;
        }

        //include current node....
        path.push_back(root->val);
        currentSum += root->val;


        solve(root->left,targetSum,path,ans,currentSum);
        solve(root->right,targetSum,path,ans,currentSum);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
            vector<vector<int> >  ans;
            int sum = 0;
            vector<int> temp; //for storing ans;
            solve(root,targetSum,temp,ans,sum);
            return ans;
    }
};