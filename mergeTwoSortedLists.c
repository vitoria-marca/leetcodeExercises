/**
 * https://leetcode.com/problems/merge-two-sorted-lists
 * Vitória M. S. Lucia
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    struct ListNode dummy_node;
    dummy_node.next = NULL;
    struct ListNode* merged = &dummy_node;

    while (list1 && list2){
        if (list1 -> val <= list2 -> val){
            merged->next = list1;
            list1 = list1 -> next;
        } else {
            merged -> next = list2;
            list2 = list2 -> next;
        }
        merged = merged -> next;
    }

    if (list1) {merged -> next = list1;}
    if (list2) {merged -> next = list2;}

    return dummy_node.next;
}