/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode *getNewNode(int val) {
    struct TreeNode *p = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    p->val = val;
    p->left = p->right = NULL;
    return p;
}

struct TreeNode* deduceTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    if (preorderSize == 0) return 0;
    int pos = 0;
    while (preorder[0] != inorder[pos]) pos += 1;
    int *preArr = (int*)malloc(sizeof(int) * 3000);
    int *inArr = (int*)malloc(sizeof(int) * 3000);
    int a = 0, b = 0;
    for (int i = 1; i <= pos; i++) preArr[a++] = preorder[i];
    for (int i = 0; i < pos; i++) inArr[b++] = inorder[i];
    struct TreeNode *root = getNewNode(preorder[0]);
    root->left = deduceTree(preArr, a, inArr, b);
    memset(preArr, 0, sizeof(int));
    memset(inArr, 0, sizeof(int));
    a = b = 0;
    for (int i = pos + 1; i < preorderSize; i++) preArr[a++] = preorder[i];
    for (int i = pos + 1; i < inorderSize; i++) inArr[b++] = inorder[i];
    root->right = deduceTree(preArr, a, inArr, b);
    return root;
}
