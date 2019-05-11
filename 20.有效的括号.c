/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

typedef struct LNode
{
    char Data;
    struct LNode *next;
}LNode,*LinkList;

LNode* pop(LinkList l)
{
    LNode *temp= l->next;
        l->next=temp->next;
    
    return temp;
}

bool push(char i,LinkList l)
{
    LNode *newNode=(LinkList) malloc(sizeof(LNode));
    if(!newNode) return false;
    
    newNode->Data=i;
    newNode->next=l->next;
    l->next=newNode;
    return true;
}


bool isValid(char * s){
    if(s[0] == NULL) return true;

    LinkList compareList=(LinkList) malloc(sizeof(LNode));
    compareList->next=NULL;
    
    for(int i=0;s[i]!=NULL;i++)
        switch (s[i])
        {
        case '(':
            if(!push(s[i],compareList))
                return false;
            break;
        case '[':
            if(!push(s[i],compareList))
                return false;
            break;
        case '{':
            if(!push(s[i],compareList))
                return false;
            break;
        case ')':
            if(compareList->next==NULL)
            {
                return false;
            }

            if('('!=pop(compareList)->Data)
            {

                    return false;
            }
            break;
        case ']':
            if(compareList->next==NULL)
            {
                return false;
            }

            if('['!=pop(compareList)->Data)
            {

                    return false;
            }        
            break;
        case '}':
            if(compareList->next==NULL)
            {
                return false;
            }
            if('{'!=pop(compareList)->Data)
            {

                    return false;
            }          
            break;
        default:
            break;
        }
    if(compareList->next==NULL)
    {

        return true;
    }
    else
    {

        return false;
    }
    
}



