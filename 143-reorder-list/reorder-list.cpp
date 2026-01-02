/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        int n=ans.size();
        vector<int>vec;
        vec.push_back(ans[0]);
        for(int i=1;i<=n/2;i++){
                vec.push_back(ans[n-i]);
                vec.push_back(ans[i]);
        }
        int t=0;
        while(temp!=NULL){
            temp->val=vec[t];
            t++;
            temp=temp->next;
        }
    }
};