/*
 * https://leetcode.com/problems/binary-tree-cameras/
 * Vitória M. S. Lucia
 */ 

#include <string.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int k = 0;

char* solution(struct TreeNode* root){
    if (root == NULL){
        return "ok";
    }
    char *left = solution(root->left);
    char *right = solution(root->right);

    if (strcmp(left, "want") == 0 || strcmp(right, "want") == 0) {
        k++;
        return "provide";
    } else if (strcmp(left, "provide") == 0 || strcmp(right, "provide") == 0){
        return "ok";
    }
    return "want";
}
int minCameraCover(struct TreeNode* root) {
    k = 0;
    char* result = solution(root);
    if (strcmp(result, "want") == 0) {
        k++;
    }

    return k;
}