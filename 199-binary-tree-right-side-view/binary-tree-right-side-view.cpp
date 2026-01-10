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
        if(root==NULL ) return 0;
        return 1+max(height(root->right),height(root->left));
    }
    //vector<int> push(TreeNode* root,vector<int> &vec){
      //  vec.push_back(root->val);
    //}

    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> vec;
        vec.push_back(root->val);
        if(height(root->right)>=height(root->left)){
            vector<int> temp = rightSideView(root->right);
            vec.insert(vec.end(),temp.begin(),temp.end());
        }
        else{
            vector<int> rp= rightSideView(root->right);
            vector<int> lp=rightSideView(root->left);
            vec.insert(vec.end(),rp.begin(),rp.end());//right value gone

            if(lp.size()>rp.size()){
                vec.insert(vec.end(),lp.begin()+rp.size(),lp.end());
            }


        }
        //int h=height(root->left)-height(root->right);

        return vec;

    }
};