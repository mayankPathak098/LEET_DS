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

    bool isCousins(TreeNode* root, int x, int y) {
        //if(root==NULL) return ;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int f=-1;
            int p=0;
            vector<int> level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                level.push_back(node->val);
                
                //children case not the cousin
                if(node->left!=NULL && node->right!=NULL){
                if(node->left->val==x && node->right->val==y) return false;
                if(node->right->val==x && node->left->val==y) return false;
                }

                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
            }
            auto it=find(level.begin(),level.end(),x);
            if(it != level.end()) f++;//found

            it=find(level.begin(),level.end(),y);
            if(it != level.end()) f++;//found

            if(f==1) return true;
        }
        return false;


    }
};