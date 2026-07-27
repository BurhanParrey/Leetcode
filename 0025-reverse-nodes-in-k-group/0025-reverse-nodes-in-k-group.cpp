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

    ListNode* reverse(ListNode* head, int times) {
        ListNode *curr = head;
        ListNode *prev = NULL;

        while (times--) {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head->next = curr;
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == NULL || k == 1)
            return head;

        ListNode *left = head;
        ListNode *res = NULL;
        ListNode *prevleft = NULL;

        while (true) {

            ListNode *right = left;

            //check k nodes exist
            for (int i = 1; i < k; i++) {
                if (right == NULL)
                    break;
                right = right->next;
            }

            if (right) {

                ListNode *nextleft = right->next;

                ListNode *newHead = reverse(left, k);

                if (prevleft)
                    prevleft->next = newHead;

                if (res == NULL)
                    res = newHead;

                prevleft = left;
                left = nextleft;
            }
            else {

                if (prevleft)
                    prevleft->next = left;

                if (res == NULL)
                    res = left;

                break;
            }
        }

        return res;
    }
};