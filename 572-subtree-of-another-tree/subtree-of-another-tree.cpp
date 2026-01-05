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
    bool identical(TreeNode* root, TreeNode* subroot){
        if(root==NULL || subroot==NULL) return root==subroot;
        bool lt=identical(root->left,subroot->left);
        bool rt=identical(root->right,subroot->right);
        return (lt && rt && root->val==subroot->val );

    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root == NULL) return false;
        if(root->val==subroot->val && identical(root,subroot)){
            return true;
        }
        bool lst=isSubtree(root->left,subroot);
        bool rst=isSubtree(root->right,subroot);
        return (lst || rst );
    }
};