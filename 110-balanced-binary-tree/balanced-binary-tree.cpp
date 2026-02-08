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
        if(root==NULL) return 0;
        int lefth=height(root->left);
        int righth=height(root->right);
        return max(righth,lefth)+1;

    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        
        
        if( !isBalanced(root->left)) return false;  //left
        
        int sum=height(root->left)-height(root->right);
        if(sum<0) sum*=-1;
        if(sum>=2) return false;
        
        if( !isBalanced(root->right)) return false;//right
        
        return true;


    }
};