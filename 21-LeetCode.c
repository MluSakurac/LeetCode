/*************************************************************************
	> File Name: 21-LeetCode.c
	> Author: Sakura M Lu 
	> Mail: 
	> Created Time: Sat 04 Nov 2023 05:29:57 PM CST
 ************************************************************************/

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2){
    if(list1 == NULL) return list2;
    struct ListNode new_head, *p1 = &new_head, *p2 = list2, *q;
    new_head.next = list1;
    while(p2){
        q = p2->next;
        while(p1->next && p1->next->val < p2->val) p1 = p1->next;
        p2->next = p1->next;
        p1->next = p2;
        p2 = q;
    }
    return new_head.next;
}
