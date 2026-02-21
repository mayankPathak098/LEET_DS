/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
        ListNode* temp=head;
        unordered_map<ListNode*,int>mp;
        while( !(mp.find(temp)!=mp.end()) ){//not found
            mp[temp]=temp->val;
            temp=temp->next;
            if(temp==NULL) return NULL;
        }
        return temp;

    }
};