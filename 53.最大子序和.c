/*
 * @lc app=leetcode.cn id=53 lang=c
 *
 * [53] 最大子序和
 */


int maxSubArray(int* nums, int numsSize){
int max=INT_MIN;
if(numsSize==1) return nums[0];
for (int i=1;i<numsSize;i++)
{
    if(nums[i]<nums[i]+nums[i-1])
        {
            nums[i]=nums[i]+nums[i-1];
            
        }       
}
for (int i=0;i<numsSize;i++)
{
    if (nums[i]>max)
    max=nums[i];
}
return max;

}


