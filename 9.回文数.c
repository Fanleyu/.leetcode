/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */


bool isPalindrome(int x){
    if(x==0) 
        return true;
    if(x<0||x%10==0) 
        return false;

    
    int temp=x;
    int y=0;
    while(temp>y)
    {
        y=temp%10+y*10;
        temp=temp/10;
    }
    if(temp==y||temp==y/10) 
        return true; 
    else 
        return false;
}



