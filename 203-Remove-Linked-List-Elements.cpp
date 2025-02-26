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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* Ptr = head;
        ListNode* Prev = nullptr;
        
        // Remove leading nodes with value val
        while (head && head->val == val) {
            head = head->next;
        }
        
        Ptr = head;
        Prev = head;
        
        while (Ptr) {
            if (Ptr->val == val) {
                Prev->next = Ptr->next;
                delete Ptr;
                Ptr = Prev->next;
            } else {
                Prev = Ptr;
                Ptr = Ptr->next;
            }
        }
        
        return head;
    }
};