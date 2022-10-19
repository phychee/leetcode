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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* temp1 = NULL;
        ListNode* temp2 = NULL;
        ListNode* head;
        head = l1;

        while (l1 && l2) {
            l1->val = l1->val + l2->val + carry;
            carry = 0;
            if (l1->val >= 10) {
                l1->val = l1->val % 10;
                carry++;
            }
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1) {
            while (l1) {
                l1->val = l1->val + carry;
                carry = 0;
                if (l1->val >= 10) {
                    l1->val = l1->val % 10;
                    carry++;
                }
                temp1 = l1;
                l1 = l1->next;
            }
        }

        if (l2) {
            while (l2->next) {
                l2->val = l2->val + carry;
                carry = 0;
                if (l2->val >= 10) {
                    l2->val = l2->val % 10;
                    carry++;
                }
                temp2 = l2;
                l2 = l2->next;
            }
        }

        if (carry != 0) {
            ListNode* new_node;
            new_node = new ListNode();
            new_node->val = carry;
            temp1->next = new_node;
        }
        return head;
    }
};
