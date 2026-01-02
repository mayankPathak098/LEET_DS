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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        
        int n=lists.size();
        
        for(int i=0; i<n; i++){
            ListNode* temp= lists[i];
            while(temp!=NULL){
                vec.push_back(temp->val);
                temp= temp->next;
            }
        }
        if(n==0 || vec.size()==0 ){
            ListNode* nulll=new ListNode();
            nulll=nulll->next;
            return nulll;
        }
        sort(vec.begin(),vec.end());
        n=vec.size();
        ListNode* head= new ListNode(vec[0]);
        ListNode* temp=head;
        for(int i=1;i<n;i++) {
            ListNode* head2=new ListNode(vec[i]);
            temp->next=head2;
            temp=temp->next;
        }
        return head;
    }
};