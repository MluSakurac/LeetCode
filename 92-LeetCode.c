/*************************************************************************
	> File Name: 92-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 28 Oct 2023 02:43:45 PM CST
 ************************************************************************/

struct ListNode *reverseBetween(struct ListNode *head, int left, int right){
    if(left == right == 1) return head;
    if(left > 1){
        head->next = reverseBetween(head->next, left - 1, right - 1);
    } else {
        struct ListNode *tail = head->next, *new_head;
        new_head = reverseBetween(head->next, left, right - 1);
        head->next = tail->next;
        tail->next = head;
        head = new_head;
    }
    return head;
}
