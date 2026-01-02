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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int k=0; //number of nodes
        while(temp!=NULL) {
            k++;
            temp=temp->next;
        }
        
       // if(head=head->next;
        if(n==k){ head=head->next;
         return head; }
        temp=head;
        k=k-n;//k=3 4th node from front  k=0
        
        while(temp!=NULL){
            if(k!=0){
            k--;}
            if(k==0){ temp->next=temp->next->next; 
            break;}
            temp=temp->next;
            
        }
        return head;
        
    }
};