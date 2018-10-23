#include<stdio.h>
struct stack
{
    int top;
    int data[100];
    int size;
};

void push(struct stack *p, void *item)
{
    if(p->top==p->size-1)
    {
        printf("the stack is full");
    }
    else
    {
        p->top=p->top+1;
        p->data[p->top]=p->data[p->top]->item;
    }

}
void *pop(struct stack *p)
{
    if(p.top=-1)
    {
        printf("the stack is empty");
    }
    else
    {
        p.top=p.top-1;
    }
}

void main()
{
    struct stack t ={100,10};
    int item;
    void *retitem;
    printf("enter the item");
    scanf("%d",&item);
    push(&t,item)
    retitem = pop(&t);
    printf("%d",*(int *)retitem)
}
