/*************************************************************************
	> File Name: 61-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 01:58:51 PM CST
 ************************************************************************/

int getLenth(struct ListNode *head){
    struct ListNode *p = head;
    int n = 0;
    while(p) n += 1, p = p->next;
    return n;
}

struct ListNode *rotateRight(struct ListNode *head, int k){
    if(head == NULL || head->next == NULL) return head;
    int n = getLenth(head);
    k %= n;
    if(k == 0) return head;
    struct ListNode *p = head, *q = head;
    while(p->next) p = p->next;
    p->next = head;
    for(int i = 0; i < n - k; i++) p = p->next, q = q->next;
    p->next = NULL;
    return q;
}
