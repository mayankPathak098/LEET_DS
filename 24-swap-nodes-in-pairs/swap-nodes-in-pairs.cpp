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
    void swapp(ListNode* h1,ListNode* h2){
        int temp=h1->val;
        h1->val=h2->val;
        h2->val=temp;

    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp1,*temp2;
        if(head==NULL||head->next==NULL) return head;
        ListNode* temp=head;
        int i=1;
        while(temp!=NULL){
            if( i%2!=0) temp1=temp;
            if( i%2==0){
                temp2=temp;
                swapp(temp1,temp2);
            }
            i++;
            temp=temp->next;
        }

        return head;
    }
};