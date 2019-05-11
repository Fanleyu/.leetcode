/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (54.20%)
 * Likes:    447
 * Dislikes: 0
 * Total Accepted:    65.3K
 * Total Submissions: 120.5K
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 * 
 * 示例：
 * 
 * 输入：1->2->4, 1->3->4
 * 输出：1->1->2->3->4->4
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* retNow=(struct ListNode*)malloc(sizeof(struct ListNode));
    retNow->next=NULL;
    struct ListNode* ret=(struct ListNode*)malloc(sizeof(struct ListNode));
    ret=retNow;
    for(;l1!=NULL&&l2!=NULL;)
    {
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        temp->next=NULL;
        if(l1->val<l2->val)
        {        
            temp->val=l1->val;
            l1=l1->next;    
        }
        else
        {
            temp->val=l2->val;
            l2=l2->next;
        }  
        retNow->next=temp;
        retNow=retNow->next; 
    }
    if(l1==NULL)
    {
        retNow->next=l2;
    }
    else
    {
        retNow->next=l1;
    }
    
return ret->next;
}

