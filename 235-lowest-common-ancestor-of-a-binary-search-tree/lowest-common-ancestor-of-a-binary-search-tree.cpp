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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        TreeNode* min;

        if(root->right==q && root->left==p) return root;

        if( (root==p)  )  min=p;
        else if( (root==q)  ) min=q;
        else if(p->val < root->val && q->val > root->val) min=root; 
        else min=root; 
        

        if(p->val < root->val && q->val < root->val){
            TreeNode *temp1;
            temp1=lowestCommonAncestor(root->left,p,q);
            if(temp1->val<min->val) min=temp1;
        }
        if(p->val > root->val && q->val > root->val){
            TreeNode *temp1;
            temp1=lowestCommonAncestor(root->right,p,q);
            if(temp1->val>min->val) min=temp1;
        }


        return min;
    }
};