/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (33.03%)
 * Likes:    532
 * Dislikes: 0
 * Total Accepted:    75.7K
 * Total Submissions: 229.1K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 * 
 * 如果不存在公共前缀，返回空字符串 ""。
 * 
 * 示例 1:
 * 
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 * 
 * 
 * 示例 2:
 * 
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 * 
 * 
 * 说明:
 * 
 * 所有输入只包含小写字母 a-z 。
 * 
 */



char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0)         
        return "";
    int minlen = strlen(strs[0]);
    if(strsSize!=1)
    {
        for(int i =1;i<strsSize;i++)
        {
            if(strlen(strs[i]) < minlen)
                minlen = strlen(strs[i]);
        }
    }
    else
    {
        return strs[0];
    }
    if(minlen == 0)
        return "";
    
    char *ret=(char*)malloc(minlen+1);
    memset(ret,0,minlen+1);
    int j=0;
    
    while(j!=minlen)
    {
        for(int i =0;i<strsSize-1;i++)
        {
            if(strs[i][j]!=strs[i+1][j])
                return ret;
        }
        ret[j]=strs[0][j];
        j++;
    }
    return ret;
}




