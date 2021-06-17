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
        int c=0;
        ListNode* ptr=head;
        while(ptr!=nullptr)
        {
            c++;
            ptr=ptr->next;
        }
        int x=c-n;
        ListNode* temp=head;
        ListNode* prev=head;
        if(n==1 && c==1)
        {
            return nullptr;
        }
        if(n==1)
        {
            while(temp->next!=nullptr)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=nullptr;
            return head;
        }
        else
        if(n==c)
        {
            head=head->next;
            return head;
        }
        while(x>1)
        {
            temp=temp->next;
            x--;
        }
        temp->next=temp->next->next;
        return head;
    }
};
