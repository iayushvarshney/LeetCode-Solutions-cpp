class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // support variables
        ListNode *res = new ListNode(-101), *prev = res, *iter = head;
        int currVal;
        // attaching res before head
        res->next = head;
        while (prev && prev->next) {
            // preparing for the inner loop
            iter = prev->next;
            currVal = iter->val;
            // advancing with all the similar values
            while (iter->next && iter->next->val == currVal) iter = iter->next;
            // case 1: only one node with currVal
            if (iter == prev->next || !iter) prev = iter;
            else prev->next = iter->next;
        }
        return res->next;
    }
};
