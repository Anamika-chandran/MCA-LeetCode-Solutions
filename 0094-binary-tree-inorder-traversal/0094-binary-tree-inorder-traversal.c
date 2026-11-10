/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void inorder(struct TreeNode* root,int* result,int* k) {
    if(root == NULL)
    return;
    inorder(root->left,result,k);
    result[*k] = root->val;
    (*k)++;
    inorder(root->right,result,k);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(100 * sizeof(int));
    int k = 0;
    inorder(root,result,&k);
    *returnSize = k;
    return result;

}