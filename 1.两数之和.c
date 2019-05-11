/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
* returnSize=2;
 int* ret = (int *)malloc(2 * sizeof(int));
  for (ret[0] = 0; ret[0] < numsSize-1; ++ret[0]) {
    for (ret[1] = ret[0] + 1; ret[1] < numsSize; ++ret[1]) {
      if (nums[ret[0]] + nums[ret[1]] == target) {
        return ret;
      }
    }
  }
  return ret;

}



