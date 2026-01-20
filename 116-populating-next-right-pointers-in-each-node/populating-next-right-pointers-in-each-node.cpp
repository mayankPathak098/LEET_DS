/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* r) {
        if(r==nullptr) return r;
        queue<Node*> q;
        q.push(r);
        Node* curr=new Node();
        while(!q.empty()){
            int size=q.size();
            //cout<<size<<endl;
            curr=q.front();
            q.pop();
            //cout<<curr->val<<endl;
            if(curr->left!=nullptr){
                q.push(curr->left);
            }
            if(curr->right!=nullptr){
                q.push(curr->right);
            }
            for(int i=1;i<size;i++){
                curr->next=q.front();
                curr=curr->next;
                q.pop();
                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
            curr->next=nullptr;
        }
        return r;
    }
};