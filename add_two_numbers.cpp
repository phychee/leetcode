/* Add Two Numbers without creating new linked list */

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
        int length1 = 0;
        int length2 = 0;

        ListNode* counter1 = l1;
        ListNode* counter2 = l2;

        ListNode* temp1 = NULL;
        ListNode* temp2 = NULL;

        ListNode* head1 = NULL;
        ListNode* head;

        while (counter1) {
            length1++;
            counter1 = counter1->next;
        }

        while (counter2) {
            length2++;
            counter2 = counter2->next;
        }

        if (length1 >= length2) {
            head = l1;
        }
        else {
            head = l2;
        }

        ListNode* result = head;
        ListNode* head2 = head;
        
        while (l1 && l2) {
            head->val = l1->val + l2->val + carry;
            carry = 0;
            if (head->val >= 10) {
                head->val = head->val % 10;
                carry++;
            }
            head1 = l1;
            head = head->next;
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1) {
            while (l1) {
                head->val = l1->val + carry;
                carry = 0;
                if (head->val >= 10) {
                    head->val = head->val % 10;
                    carry++;
                }
                temp1 = l1;
                head = head->next;
                l1 = l1->next;
            }
        }

        if (l2) {
            while (l2) {
                head->val = l2->val + carry;
                carry = 0;
                if (head->val >= 10) {
                    head->val = head->val % 10;
                    carry++;
                }
                temp2 = l2;
                head = head->next;
                l2 = l2->next;
            }
        }

        if (carry != 0) {
            ListNode* new_node;
            new_node = new ListNode();
            new_node->val = carry;
            if ((length1 == 1) && (length1 == length2)) {
                head2->next = new_node;
            }
            else if (length1 == length2) {
                head1->next = new_node;
            }
            else if (length1 >= length2){
                temp1->next = new_node;
            }
            else if (length1 < length2){
                temp2->next = new_node;
            }
        }
        return result;
    }
};
