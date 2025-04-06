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
    ListNode* swapPairs(ListNode* head) {

        if(!head)
        {
            return head;
        }

        if(!head->next)
        {
            return head;
        }

        ListNode* Prev = nullptr;
        ListNode* Curr = head;
        ListNode* newHead = head->next;
        
        while(Curr && Curr->next)
        {
            ListNode* nextCurr = Curr->next->next;
            ListNode* second = Curr->next;

            Curr->next = second->next;

            second->next = Curr;

            if(Prev) //if prev == nullptr means the current still points to the first node
            {
                Prev->next = second;
            }

            Prev = Curr;
            Curr = nextCurr;
        }

        return newHead;
    }
};