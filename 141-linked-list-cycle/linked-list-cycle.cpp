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
    bool hasCycle(ListNode *head) {
        int i=0;
        unordered_map<ListNode*,int>mp;
        if(head==NULL) return false;
        while(!(mp.find(head) != mp.end())){//not found
            mp[head]=i;
            i++;
            if(head->next==NULL) return false;
            head=head->next;
        }
        return true;

    }
};