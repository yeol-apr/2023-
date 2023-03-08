#include <stdio.h>
#define ture 1;
#define false 0;
#define bool char;
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode * next;
    /* data */
}LNode,*LinkList;
bool InitList(LinkList *L){
    *L = (LNode *)malloc(sizeof(LNode));
    if(*L==NULL){
        return false;
    }
    (*L)->next = NULL;
    return ture;
}
bool ListInsert(LinkList *L,int i,ElemType e){
    if (i<1)
    {
        return false;
    }
    LNode *p;//指针指向当前扫描的节点
    int j;//当前p指向第几节点；
    p = L;//L指向头节点，头节点是第0个节点，不存放数据
    while (p != NULL&&j<i-1)//i值不合法
    {
        p==p->next;
        j++;
    }
    if (p==NULL)
        return false;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return ture;
}
void test(){
    LinkList L;
    InitList(L);
    
}