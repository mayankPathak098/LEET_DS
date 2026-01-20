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
    void preorder(TreeNode* root,vector<int>&vec){
        if(root==NULL) return;
        vec.push_back(root->val);
        preorder(root->left,vec);
        preorder(root->right,vec);
    }   
    void buildtree(TreeNode* root,vector<int>&vec){
        //6,5,4,3,2

        for(int i=1;i<vec.size();i++){
            TreeNode* temp=new TreeNode(vec[i]);
            root->left=NULL;
            root->right=temp;
            root=root->right;
        }
        
    }
    void flatten(TreeNode* root) {
        if(root!=NULL){
            vector<int>vec;
            preorder(root,vec);
            buildtree(root,vec);
            }
    }
};