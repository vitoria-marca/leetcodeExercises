/*
 * https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/
 * Vitória M. S. Lucia
 */

struct ListNode* findMiddle(struct ListNode* head, struct ListNode** prev);
 
struct ListNode* findMiddle(struct ListNode* head, struct ListNode** prev){
   struct ListNode* slow = head;
   struct ListNode* fast = head;
   *prev = NULL; //previous middle's node

   while (fast && fast->next){
       *prev = slow;
       slow = slow -> next;
       fast = fast -> next -> next;
   }
   return slow;
}
struct TreeNode* sortedListToBST(struct ListNode* head) {
   if (!head){
       return NULL;
   }

   struct ListNode* prev = NULL;
   struct ListNode* mid = findMiddle(head, &prev);

   struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
   root->val = mid->val;
   root->left = NULL;
   root->right = NULL;

   if (head == mid){
       return root;
   } else if (prev){
       prev->next = NULL;
   }

   root->left = sortedListToBST(head);
   root->right = sortedListToBST(mid->next);

   return root;
}