/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */


int removeDuplicates(int* nums, int numsSize){
    if(numsSize==0) return 0;
    int len=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]!=nums[i-1])
            {
                nums[len]=nums[i];
                len++;
            }
    }
    return  len;
}



