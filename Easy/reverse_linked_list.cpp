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
    ListNode* reverseList(ListNode* head) {
        vector<int> res;
        
        for(ListNode* cur=head ; cur!=NULL ; cur=cur->next){
            res.push_back(cur->val);
        }
        
        for(ListNode* cur=head ; cur!=NULL ; cur=cur->next){
            cur->val = res.back();
            res.pop_back();
        }
        
        
        return head;
        
        
        
    }
};
