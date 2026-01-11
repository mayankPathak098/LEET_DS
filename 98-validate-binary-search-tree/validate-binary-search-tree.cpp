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
    void inorder(TreeNode* root,vector<int> &vec){
        if(root==NULL) return;
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
    bool isValidBST(TreeNode* root) {
       if(root==NULL) return true;
       vector<int> vec;
       inorder(root,vec);
       int t=1;
        for(int i=1;i<vec.size();i++){
            if(vec[i]<=vec[i-1]) {
                t=0;break;
            }
        }
        if(t==0) return false;
        else return true;
    }
};