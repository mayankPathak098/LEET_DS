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
    int maxLevelSum(TreeNode* root) {
        int max=INT_MIN;
        int lvl;
        //if(root==NULL) return max;
        queue<TreeNode*>q;
        q.push(root);
        int l=0;
        while(!q.empty()){ //while not empty
            int size=q.size();  //1,2
            l++;
            int sum=0;
            for(int i=0;i<size;i++){
                
                
                TreeNode* temp=q.front();
                q.pop();
                sum+=temp->val;

                
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            if(max<sum){
                    max=sum;
                    lvl=l;
                } 
        }
        return lvl;
    }
};