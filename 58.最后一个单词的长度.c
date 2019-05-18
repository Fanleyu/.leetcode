/*
 * @lc app=leetcode.cn id=58 lang=c
 *
 * [58] 最后一个单词的长度
 */


int lengthOfLastWord(char * s){

if(s[0]==0) return 0;
int i=0;
int temp=-100;
int last=-100;
while(s[i]!=0)
{
if(s[i]==' '&&((s[i+1]>='A'&&s[i+1]<='Z')||(s[i+1]>='a'&&s[i+1]<='z')))
    {
        temp=i;
    }
if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
    {
        last =i;
    }
i++;
}
if(last<0)
    return 0;
if(temp<0)
    return last+1;
if(last-temp>0)
    return last-temp;
else
{
    return 0;
}

}



