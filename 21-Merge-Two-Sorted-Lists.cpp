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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* S;
         ListNode* L;
          ListNode* R;
            


        if(list1 == nullptr)
        {
            return list2;
        }

        if(list2 == nullptr)
        {
            return list1;
        }

        if(list1->val < list2->val)
        {
            S = list1;
            L = list2;
        }
        else
        {
            L = list1;
            S = list2;
        }

        ListNode* head = S;
        while(L)
        {
            R = S->next;
            while(R && R->val <= L->val)
            {
                S = R;
                R = R->next;
            }

            S->next = L;
            L = R; 
            S = S->next;
        }

       return head;
    }
};