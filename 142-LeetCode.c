/*************************************************************************
	> File Name: 142-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 02:31:20 PM CST
 ************************************************************************/

struct ListNode *detectCycle(struct ListNode *head){
    if(head == NULL || head->next == NULL) return NULL;
    struct ListNode *p = head, *q = head, *start = head;
    while(q && q->next){
        p = p->next, q = q->next->next;
        if(p == q){
            while(p != start) start = start->next, p = p->next;
            return start;
        }
    }
    return NULL;
}
