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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == nullptr) //zero nodes
        {
            return nullptr;
        }
        else if(!head->next) //One node
        {
            return head;
        }
        else if(!head->next->next) //two nodes
        {
            if(head->val == head->next->val)
            {
                head->next = nullptr;
                return head;
            }
            else
            {
                return head;
            }
        }

        ListNode* Base = head ;
        ListNode* Duplication = head->next;        

        while(Duplication)
        {
            if(Duplication->val == Base->val )
            {
                ListNode* Temp = Duplication;
                Base->next = Duplication->next;
                Duplication = Duplication->next;
                delete Temp;
            }
            else
            {
                Base = Base->next;
                Duplication = Duplication->next;
            }
        }
        return head;
    }
};