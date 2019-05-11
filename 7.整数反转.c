/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */


int reverse(int x){

    int temp=x;
    int ret=0;
    while(temp!=0)
    {
        if(abs(ret)>INT_MAX/10||(abs(ret)==INT_MAX/10&&abs(temp)==7))
            return 0;
        ret=temp%10+ret*10;
        temp=temp/10;
   
    }
    return ret;
}



