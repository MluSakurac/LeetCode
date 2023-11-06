int val = 0;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL && l2 == NULL && val == 0) return NULL;
    struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1 = l1 ? (val += l1->val, l1->next) : l1;
    l2 = l2 ? (val += l2->val, l2->next) : l2;
    node->val = val % 10;
    val /= 10;
    node->next = addTwoNumbers(l1, l2);
    return node;
}
