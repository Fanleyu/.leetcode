/*
 * @lc app=leetcode.cn id=66 lang=c
 *
 * [66] 加一
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {


    *returnSize=digitsSize;
    int i=digitsSize-1;
        while(i!=0)
        {
            if(digits[i]==9)
            {
                   digits[i]=0;
            } 
            else
            {
                    digits[i]++;
                    return digits;
            }
            i--;
                
        }
        if (i==0)
        {
            if(digits[0]==9)
                {   
                    * returnSize=digitsSize+1;

                    digits[0]=0;
                    int * ret =(int *)malloc(sizeof(int)*(digitsSize+1));
                    ret[0]=1;
                    for (int i = 0; i < digitsSize; i++)
                    {
                        ret[i+1]=digits[i];
                    }
                    
                    return ret;
                }
                else
                {
                    digits[0]++;
                    return digits;
                }
                
        }
    
    return digits;
    
}


