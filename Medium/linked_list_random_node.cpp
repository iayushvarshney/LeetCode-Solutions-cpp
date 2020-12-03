class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    ListNode* head =NULL;
    //int ans = 0;
    Solution(ListNode* h) {
        head = h;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        ListNode* curr= head;
        ListNode* res;
        int n=1;
        while(curr) {
            if (rand()% n == 0)
            res = curr;
            curr = curr->next;
            n++;
        }
   return res->val;
    }
};
