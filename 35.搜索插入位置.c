/*
 * @lc app=leetcode.cn id=35 lang=c
 *
 * [35] 搜索插入位置
 */


int searchInsert(int* nums, int numsSize, int target){
    if (numsSize==0) return 0;
    int right = numsSize-1;
    int left = 0;
    int mid = (left + right)/2;
    while(left<=right)
    {
        if(nums[mid]<target)
        {
            left = mid+1;
        }
        else if(nums[mid]>target)
        {
            right = mid-1; 
        }
        else  
            return mid;
        mid = (left + right)/2;
    }
        if(left<=right)
        {
            return right;
        }
        else 
            return left;
    
}

