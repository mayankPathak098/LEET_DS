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
    int idx=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        if(inorder.size()==0) return NULL;

        int node=preorder[idx++];
        TreeNode *root=new TreeNode(node);

        int pos=find(inorder.begin(),inorder.end(),node)-inorder.begin();
        vector<int> left(inorder.begin(),inorder.begin()+pos);
        vector<int> right(inorder.begin()+pos+1,inorder.end());

        root->left=buildTree(preorder,left);
        root->right=buildTree(preorder,right);



        
        return root;
    }
};