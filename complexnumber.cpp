#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct Node{
    int /*data type*/ data;
    struct Node *next;
}LNode,*LinkList;
LinkList H;

#define Flag -1
LinkList Creat_LinkList1()      //���������㷨1
{
    LinkList L;
    LNode *s;
    int x;
    L = NULL;
    cin>>x;     //cin��C++�ı�׼���������� >>�ǲ�������� 
    while (x!=Flag)
    {
        s=new LNode;
        s->data=x;          //������������ֵ
        s->next=L;          //����һ�����ĵ�ַ����ָ����
        L=s;                //��s�ĵ�ַ����L
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
        s=new LNode;            //����һ���µĽ��
        s->data=x;
        if(L=NULL)
            L=s;
        else
            r->next=s;           //��s�ĵ�ַ��r��ָ����
        r = s;                  //�ѽṹ��ָ��r��ַ��Ϊs
        cin>>x;
    }
    if(r!=NULL)
        r->next=NULL;           //�����һ�����ָ�����Ϊ��
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