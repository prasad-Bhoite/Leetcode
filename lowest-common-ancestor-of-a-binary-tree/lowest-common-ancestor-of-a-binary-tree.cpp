/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        //base case...
        if(root==NULL)
        {
            return NULL;
        }   


        //check p and q --> root node khud p or q to nahi hai checking...
        if(root->val == p->val)
        {
            return p;
        }

        if(root->val ==q->val)
        {
            return q;
        }

        //kuch nahi mila to first check in the left and after that right...
        TreeNode* leftAns = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightAns = lowestCommonAncestor(root->right,p,q);

        //Logic 4 condition wala...
        if(leftAns==NULL && rightAns==NULL)
        {
                return NULL;
        }

        else if(leftAns!=NULL && rightAns==NULL)
        {
            return leftAns;
        }

        else if(leftAns==NULL && rightAns!=NULL)
        {
            return rightAns;
        }

        else
        {
            //means --> leftAns!=NULL && rightAns!=NULL
            return root;
        }
    }
};