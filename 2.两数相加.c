/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;

    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *ans = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next = NULL;
    head->val = 0;
    ans = head;
    int val = 0;
    int l1_val = 0;
    int l2_val = 0;
    while ((l1 != NULL) || (l2 != NULL))
    {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->next = NULL;
        if (l1 != NULL)
        {
            l1_val = l1->val;
            l1 = l1->next;
        }
        else
        {
            l1_val = 0;
        }
        
        if (l2 != NULL)
        {
            l2_val = l2->val;
            l2 = l2->next;
        }
        else
        {
            l2_val = 0;
        }

        temp->val = (l1_val + l2_val + val) % 10;
        val = (l1_val + l2_val + val) / 10;

        head->next = temp;
        head = head->next;
    }
    if (val == 1)
    {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
        temp->next = NULL;
        temp->val = 1;
        head->next = temp;
    }
    return ans->next;
}
