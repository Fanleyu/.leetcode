/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */


int removeElement(int* nums, int numsSize, int val){
    if(numsSize==0) return 0;
    int len=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
            {
                nums[len]=nums[i];
                len++;
            }
    }
    return  len;
}



