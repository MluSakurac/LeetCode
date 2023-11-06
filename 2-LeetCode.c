struct ListNode *getNewNode(int val){
    struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
    p->val =val;
    p->next = NULL;
    return p;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int val = 0;
    struct ListNode new_head, *p = &new_head;
    new_head.next = NULL;
    while(val || l1 || l2) {
        p->next = getNewNode(0);
        p = p->next;
        l1 ? (val += l1->val, l1 = l1->next) : l1;
        l2 ? (val += l2->val, l2 = l2->next) : l2;//节点存在就相加
        p->val = val % 10;//取个位
        val /= 10;//进位信息
    }
    return new_head.next;
}
