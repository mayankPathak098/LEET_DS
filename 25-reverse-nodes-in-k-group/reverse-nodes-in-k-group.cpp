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
    
    ListNode* rev(ListNode* temp,ListNode* temp1,int d){//head=temp1
        ListNode *cur=temp1,*prev=temp,*next=temp;
        while(cur!=temp){
                next=cur->next;
                cur->next=prev;
                prev=cur;
                cur=next;
            }
            return prev;
            }



    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head,*temp1=head,*ans=head,*ans2=head,*proxy=head;
        int j=0;
        if(head==NULL || head->next==NULL||k==1) return head;
        while(temp!=NULL){
            j++;
            temp=temp->next;
        }
        temp=head;
        j=j-(j%k);
        int idx=0,d=0;

            for(int i=0;i<j;i++){
                idx++;
                temp=temp->next;
                if(idx%k==0 && idx!=0){
                    if(d==0){
                        d++;
                        ans=rev(temp,temp1,d);
                    
                        temp1=temp;
                        }else {
                        proxy=temp1;
                        ans2->next=rev(temp,temp1,d);
                        ans2=proxy;
                        temp1=temp;
                        }
                } 
                }

        return ans;

    }
};