#include<stdio.h>
#include<stdlib.h>
typedef struct SeqList{
int *array;
int size;
int capacity;
}SeqList;
void SeqlistInit(SeqList *p,int capacity)      //顺序表初始化
{
p->array=malloc(sizeof(int)*capacity);
p->size=0;
p->capacity=capacity;
}

void SeqListDestroy(Seqlist *p,)                 //顺序表销毁
{
free(p->array);;
}

void SeqListBehind(SeqList *p,int v)                         //顺序表尾插,,v为插入数据
{
p->array[p->size]=v;
p->size++;
}

void SeqListFront(SeqList *p,size;int v)          //顺序表头插,
{
//首先要分析数据域下标与空间下标关系
for(int i=p->size;i>=1;i--)        //此处 i代表的是空间下标
{
p->array[i]=p->array[i-1];
}
p->array[0]=v;
p->size++;              ///////////////////////////这步千万不能忘记
}

//顺序表中查找的函数接口应该怎么写??


void SeqListBetween(Seqlist *p;int pow;int v)          //顺序表中间位置插入接口
{
//这次与上面不同,i代表数据域下标           
for(int i=p->size-1;i>=pow;i--)
{
p->array[i+1]=p->array[i];
}
p->array[pow]=v
ps->size++;            //顺序表插入都少不了这一步
}

//顺序表扩容
static void CheckCapacity(SeqList *ps)
{
if(ps->size<ps->capacity)
{
return;
}
int newCapacity=ps->capacity*2;
int *newArray=(int *)malloc(sizeof(int)*newCapacity)
//搬迁老数据
for(int i= 0;i<ps->size;i++)
{newArray[i]=ps->array[i]
}
//释放老空间
ps->array=newArray
free(ps->array);
ps->capacity=newCapacity
}















