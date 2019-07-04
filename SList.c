#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef struct Node{
int value;
struct Node *next;
}Node;

//链表的初始化
SListInit(Node **ppFirst){
*ppFirst=NULL;
}

//链表的头插
SListSertFront(Node **ppFirst,int v)
{
Node *cur=(Node *)malloc(sizeof(Node));
cur->value=v;
cur-next=*ppFirst;
*ppFirst=cur;
}

//链表的头删    头删尾删都需要定义一个next结构体指针进行存储节点位置!!
SListDeleteFront(Node **ppFirst)
{
Node *next=(*ppFirst)->next
free(*ppFirst)
*ppFirst=next
}

//链表的尾插
SListInsertBack(Node **ppFirst,int v)   //在只有一个节点的时候需要修改first节点的值,故要使用二级指针
{
//for(Node *cur=*ppFirst;cur->next!=NULL;next=cur->next)    这是链表的遍历   改为while语句写将会更加的直观
(Node *)cur=(Node *)malloc(sizeof(Node))

while(cur->next!=NULL)
{
next=cur->next;
}

}










