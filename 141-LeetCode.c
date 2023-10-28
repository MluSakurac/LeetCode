/*************************************************************************
	> File Name: 141-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 12:52:12 PM CST
 ************************************************************************/

bool hasCycle(struct ListNode *head){
    if(head == NULL || head->next == NULL) return false;
    struct ListNode *p = head, *q = head;
    while(q && q->next){
        p = p->next, q = q->next->next;
        if(p == q) return true;
    }
    return false;
}
