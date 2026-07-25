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
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (times--) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        head->next = curr;
        return prev;
    }

    ListNode* swapPairs(ListNode* head) {

        if (head == NULL)
            return NULL;

        ListNode* left = head;
        ListNode* prevLeft = NULL;
        ListNode* res = NULL;

        while (left) {

            ListNode* right = left;

            for (int i = 0; i < 1; i++) {
                if (right == NULL)
                    break;
                right = right->next;
            }

            if (right) {

                ListNode* nextLeft = right->next;

                ListNode* newHead = reverse(left, 2);

                if (prevLeft)
                    prevLeft->next = newHead;

                if (res == NULL)
                    res = newHead;

                prevLeft = left;
                left = nextLeft;
            }
            else {

                if (prevLeft)
                    prevLeft->next = left;

                if (res == NULL)
                    res = left;

                break;
            }
        }

        return res;
    }
};