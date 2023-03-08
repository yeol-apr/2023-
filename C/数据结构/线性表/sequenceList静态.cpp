#include<stdio.h>
#define MaxSize 10 //定义最大长度
typedef int ElemType;
typedef struct 
{
    ElemType data[MaxSize];
    int length;
}Sqlist;

int initList(Sqlist *L)
{
    L->length=0;
}
int GetElem(Sqlist &L,int i,ElemType *e)
{
    if (1<i||i>L.length)return 0;
    e=L->data[i-1];
    return 1;
}
int LocateElem(Sqlist *L,ElemType e)
{   int i;
    for(i=0;i<=L->length;i++)
        if (L->data[i]==e)
        {
            return i+1;   
        }
    return 0;       
}
int ListInsert(Sqlist *L,int i,ElemType e)
{
    if (i<1||i>L->length)
    {
        return 0;
    }
    if (L->length==MaxSize)
    {
        return 0;
    }
    for (int j = L->length-1; j >=i; j--)
    {
        L->data[j+1]=L->data[j];
    }
    L->data[i-1]=e;
    L->length++;
    return 1;   
}
int ListDelete(Sqlist *L,int i)
{
    if (i<1||i>L->length)
    {
        return 0;
    }
    for (int  j = i; j <L->length-1; j++)
    {
        L->data[j-1]=L->data[j];
    }
    L->length--;    
    return 1;
}
