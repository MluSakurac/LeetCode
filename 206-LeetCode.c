/*************************************************************************
	> File Name: 206-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 12:37:35 PM CST
 ************************************************************************/

#include<stdio.h>

struct ListNode *reverseList(struct ListNode *head){
    if(head == NULL || head->next == NULL) return head;
    struct ListNode *p = head, *q, new_head;
    new_head.next = NULL;
    while(p){
        q = p->next;
        p->next = new_head.next;
        new_head.next = p;
        p = q;
    }
    return new_head.next;
}
