/*************************************************************************
	> File Name: 206-LeetCode-recu.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 12:42:28 PM CST
 ************************************************************************/


struct ListNode *reverseList(struct ListNode *head){
    if(head == NULL || head->next == NULL) return head;
    struct ListNode *tail = head->next, *new_head;
    new_head = reverseList(head->next);
    head->next = tail->next;
    tail->next = head;
    return new_head;
}
