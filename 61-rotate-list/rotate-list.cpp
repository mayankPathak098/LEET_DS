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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *t1=head,*t2=head->next;
        int idx=0;
        while(t1!=NULL){
                t1=t1->next;
                idx++;
            }
        if(k>=idx) k=k%idx;
        for(int i=0;i<k;i++){
            t1=head,t2=head->next;
            while(t2->next!=NULL){
                t1=t1->next;
                t2=t2->next;
            }
            t1->next=NULL;
            t2->next=head;
            head=t2;
        }
        return head;
    }
};