#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct Node{
    int /*data type*/ data;
    struct Node *next;
}LNode,*LinkList;
LinkList H;

#define Flag -1
LinkList Creat_LinkList1()      //建立链表算法1
{
    LinkList L;
    LNode *s;
    int x;
    L = NULL;
    cin>>x;     //cin是C++的标准输入流对象 >>是插入运算符 
    while (x!=Flag)
    {
        s=new LNode;
        s->data=x;          //给结点的数据域赋值
        s->next=L;          //将上一个结点的地址给予指针域
        L=s;                //将s的地址给予L
        cin>>x;
    }
    return L;
}

LinkList Creat_LinkList2()
{
    LinkList L;
    LNode *s,*r;
    int x;
    L=r=NULL;
    cin>>x;
    while (x!=Flag)         
    {
        s=new LNode;            //申请一个新的结点
        s->data=x;
        if(L=NULL)
            L=s;
        else
            r->next=s;           //将s的地址给r的指针域
        r = s;                  //把结构体指针r地址变为s
        cin>>x;
    }
    if(r!=NULL)
        r->next=NULL;           //将最后一个结点指针域变为空
    return L;
}

int main()
{
   H = Creat_LinkList2();
   cout << H->data;
   LinkList q;
   H = Creat_LinkList2();
   printf("%d",H->data);
   return 0;
}