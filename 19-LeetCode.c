/*************************************************************************
	> File Name: 19-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 02:18:51 PM CST
 ************************************************************************/

int getLenth(struct ListNode *head){
    int n = 0;
    struct ListNode *p = head;
    while(p) p = p->next, n += 1;
    return n;
}

struct ListNode *removeNthFromEnd(struct ListNode *head, int n){
    struct ListNode new_head, *p = &new_head, *q;
    new_head.next = head;
    int k = getLenth(head) - n;
    while(k) p = p->next, k -= 1;
    p->next = p->next->next; 
    return new_head.next;
}
